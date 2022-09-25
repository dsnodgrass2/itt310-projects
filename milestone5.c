/*
A simple amortization calculator to determine the periodic
patment amount due on a loan. Takes into account amount paid,
amount of principal, amount of interest, and total number of payments
*/
#include <stdio.h>
//Import stdio from standard library
#include <math.h>
//Import math from standard library
#include "Milestone5.h"
//Import custom header for this project

struct Person {
    char fName[50];
    char lName[50];
    int pAge;
};
//Creates the structure for "Person" which holds both char and int data types

union sampleUnion {
    int a;
    float b;
    char str[6];
};
//Creates the Union sampleUnion, which has an in, float, and char data type


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
    for (i = 0; i < 6; ++i) {
        printf("&myArray[%d] = %p\n", i, &myArray[i]);
    }
    //for loop that runs through and prints each address in array
    printf("Address of array: %p\n", myArray);
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

    struct Person Person1;
    struct Person Person2;
    //Declares instances of structure Person

    strcpy(Person1.fName, "Dillen");
    strcpy(Person1.lName, "Snodgrass");
    Person1.pAge = 28;
    //Initializes members of Person1 structure

    strcpy(Person2.fName, "Rose");
    strcpy(Person2.lName, "Honey");
    Person2.pAge = 30;
    //Initializes members of Person2 structure

    printf("First name is : %s\n", Person1.fName);
    printf("Last name is : %s\n", Person1.lName);
    printf("Age is : %d\n", Person1.pAge);
    //Prints data from structure Person1
    printf("First name is : %s\n", Person2.fName);
    printf("Last name is : %s\n", Person2.lName);
    printf("Age is : %d\n", Person2.pAge);
    //Prints data from structure Person2
    union sampleUnion sample;
    //Declares instance of union named sample
    sample.a = 100;
    printf("sample.a is equal to : %d\n", sample.a);
    //Initializes member a of union and prints data

    sample.b = 47.2;
    printf("sample.b is equal to : %f\n", sample.b);
    //Initializes member b of union and prints data

    strcpy(sample.str, "Hello!");
    printf("sample.str is equal to : %s\n", sample.str);
    //Initialies member str of union and prints data

    {
        FILE* f;
        char str[80];

        f = fopen_s("C:\\finaltest.txt");

        if (f == NULL)
        {
            printf("Error");
            exit(1);
        }

        printf("Enter a string: ");
        scanf_s("%s", &str);

        fprintf(f, "%d", str);
        fclose(f);

        return 0;
    }
    //Should write a file named finaltest

    


    return 0;
}

