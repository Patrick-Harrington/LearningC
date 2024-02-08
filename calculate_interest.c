/*
    Calculate Interest -- accepts user input for principal amount, interst rate, and time in years.
    The interest is calculated and printed to the terminal along with the new total.

    This program will assume interest is compounded annually: 
        A = P X (1 + r)^t
        A is future value of investment including interest
        P is principle amount
        r is annual interest rate
        t is time in years

    Written by: Pat Harrington
    Date: 2/7/2024
*/

#include <stdio.h>
#include <math.h>

int main()
{

    double A, P, r;
    int t; // Time represented in whole years

    // Prompt user and read principal ammount
    printf("Enter principal amount: $");
    scanf("%lf", &P);

    // Prompt user and read annual interest rate
    printf("Enter annual interest rate (decimal): ");
    scanf("%lf", &r);

    // Prompt user and read time in years
    printf("Enter time (years): ");
    scanf("%d", &t);

    // Calculate compound interest
    A = P * pow((1 + r), t) - P;

    // Print compound interest
    printf("\nCompound Interest: $%.2lf\n", A);
    printf("New Total: $%.2lf\n", A + P);

    return 0;

} // End main