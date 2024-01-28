/*
    While/For -- written to understand the difference in syntax between while and for loops. The 
    program takes a simple input from the user (integer 1-100), then outputs that integer followed by
    every integer between the user's input and 0 (increments of 1 in descending order). It demonstrates
    a basic understanding of looping, iteration, and the use of shorthand operators.

    Written by: Pat Harrington
    Date: 1/28/2024
*/

#include <stdio.h>

int main() 
{

    int iWhile, iFor;

    // Prompt user and read input
    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &iWhile);

    // Define iFor here so that its value is not changed before the for loop
    iFor = iWhile;

    printf("\nwhile\n");
    while (iWhile >= 0) {
        printf("%d|", iWhile);
        iWhile--;
    }

    printf("\n\n");

    printf("for\n");
    for (; iFor >= 0; iFor--) {
        printf("%d|", iFor);
    }

    printf("\n\n");

    return 0;

} // End main