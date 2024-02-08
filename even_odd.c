/*
    Even or Odd -- takes user input in the form of an integer and determines if
    it is even or odd.

    Written by: Pat Harrington
    Date: 2/7/2024
*/

#include <stdio.h>

int main()
{

    int number;

    // Prompt user and read input for number
    printf("\nEnter a number to determine if it is even or odd:\n\n> ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("\n%d is even.\n\n", number); // Print if even
    } else {
        printf("\n%d is odd.\n\n", number); // Print if odd
    }

    return 0;

} // End main