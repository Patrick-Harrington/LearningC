/*
    Prime Time -- User defines a range within which the program will display all prime numbers. Written
    to demonstrate an understanding of nested loops.

    Written by: Pat Harrington
    Date: 1/31/2024
*/


#include <stdio.h>

int main()
{

    int start, end, i, j;

    // Title
    printf("\n\t+------------+\n\t| Prime Time |\n\t+------------+\n\n");

    // Prompt user and read input for start and end of range
    printf("Enter value for range start (low): ");
    scanf("%d", &start);
    printf("Enter value for range end (high): ");
    scanf("%d", &end);
    printf("\nPrime numbers between %d and %d are:\n\n", start, end);

    // Determine prime numbers within range
    for (i = start; i <= end; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        } // End inner loop
        if (i == j) {
            printf("| %d ", i); // Print if prime
        }
    } // End outer loop

    printf("|\n\n"); // Formatting

    return 0;

} // End main