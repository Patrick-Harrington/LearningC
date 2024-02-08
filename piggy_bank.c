/*
    Piggy Bank Total -- takes user input for total quantity of half-dollars, dimes, 
    nickels, and pennies, then calculates the total in dollars based on their values.

    Written by: Pat Harrington
    Date: 2/7/2024
*/

#include <stdio.h>

int main()
{
    // Initialize variables for quantities
    int halfDollar, dime, nickel, penny;

    // Initialize variables for values
    float halfDolallarValue=0.5, dimeValue=0.10, nickelValue=0.05, pennyValue=0.01;

    // Initialize variable for total
    float total;

    // Prompt user and read input
    printf("Enter number of Half Dollars: "); // Half dollars
    scanf("%d", &halfDollar);
    printf("Enter number of Dimes: "); // Dimes
    scanf("%d", &dime);
    printf("Enter number of Nickels: "); // Nickels
    scanf("%d", &nickel);
    printf("Enter number of Pennies: "); // Pennies
    scanf("%d", &penny);

    // Calculate total in piggy bank
    total = (halfDollar*halfDolallarValue) + (dime*dimeValue) + (nickel*nickelValue) + (penny*pennyValue);

    // Print result
    printf("\n\nTotal in Piggy Bank: $%.2f\n", total);

    return 0;

} // End main