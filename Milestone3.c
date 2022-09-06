/*
A simple amortization calculator to determine the periodic
patment amount due on a loan. Takes into account amount paid,
amount of principal, amount of interest, and total number of payments
*/
#include <stdio.h>
//Import stdio from standard library
#include <math.h>
//Import math from standard library
#include "Milestone3.h"
//Import custom header for this project




void loanDeets(float* loanAmount, int* years, float* interestRate)
/*Defines the loanDeets function which will be the primary function of the program. This program takes each of the variables and initiazes them to the number the user inputs*/
{
    printf("Enter The total loan amount: ");
    scanf_s("%f", loanAmount);
    //initializes loanAmount variable
    printf("Enter the number of years on the loan: ");
    scanf_s("%d", years);
    //initializes years variable
    printf("Enter the annual interest rate: ");
    scanf_s("%f", interestRate);
    //intitializes interestRate variable
}



float principle(int years, float i)
/*Defines the principle function, this function will be implementing the algorithm to determine the principle amount.*/
{
    int months = years * 12;
    //Intializes the months variable
    return (pow((1 + i), months) - 1) / ((i)*pow((1 + i), months));
    //This is the algorithm doing nost of the work for amoritizaton, it is using loanAmount, years, interestRate, and months to detrmine principle paid
}

int arrayPrint(void) {
    /*Defines the arrayPrint function which initializes an array, then prints
    the address of each array segment*/
    int myArray[5] = { 1,2,3,4,5 };
    int i;
    for (i = 0; i < 8; ++i) {
        printf("&myArray[%d] = %p\n", i, &myArray[i]);
    }
    //for loop that runs through and prints each address in array
    printf("Address of array: %p", myArray);
    //prints myArray address technically address at [0]
}



int main(void)
{
    void loanDeets(float* loanAmount, int* years, float* interestRate);
    float discount(int years, float i);
    float loanAmount, interestRate, princ;
    int years;
    int a = 0;
    //Declairing vairables

    loanDeets(&loanAmount, &years, &interestRate);
    //Runs loanDeets function
    princ = principle(years, interestRate / 1200);
    // initializes princ to principal function

    printf(PRINC_MSG, princ);
    //Prints PRINC_MSG from Milestone2.h


    printf(LOAN_MSG, loanAmount / princ);
    //prints LOAN_MSG from Milestone2.h, does final calculation

    {
        for (int a = 0; a <= 5; ++a)
        {
            if (a <= 5)
                printf("%d\n", a);
        }
    }
    //A simple loop

    arrayPrint();
    //calls arrayPrint function


    return 0;
}

