/*
A simple amortization calculator to determine the periodic 
patment amount due on a loan. Takes into account amount paid,
amount of principal, amount of interest, and total number of payments
*/
#include <stdio.h>
//Import stdio from standard library
#include <math.h>
//Import math from standard library
#include "Milestone2.h"
//Import custom header for this project




void loanDeets(float* loanAmount, int* years, float* interestRate) 
{
    printf("Enter The total loan amount: ");
    scanf_s("%f", loanAmount);
    printf("Enter the number of years on the loan: ");
    scanf_s("%d", years);
    printf("Enter the annual interest rate: ");
    scanf_s("%f", interestRate);
}


float principle(int years, float i) 
{
    int months = years * 12;
    return (pow((1 + i), months) - 1) / ((i)*pow((1 + i), months));
}



int main(void) 
{
    void loanDeets(float* loanAmount, int* years, float* interestRate);
    float discount(int years, float i);
    float loanAmount, interestRate, princ;
    int years;
    int a = 0;
    
    loanDeets(&loanAmount, &years, &interestRate);
    princ = principle(years, interestRate / 1200);

    printf(PRINC_MSG, princ);


    printf(LOAN_MSG, loanAmount / princ);

    {
        for (int a = 0; a <= 5; ++a)
        {
            if (a <= 5)
                printf("%d\n", a);
        }
    }


    return 0;
}

