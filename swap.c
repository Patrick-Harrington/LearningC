/*
    Write a C Program to swap two numbers

    Written by: Pat Harrington
    Date: 2/8/2024
*/

#include <stdio.h>

int main()
{

    int num1, num2;

    // Prompt user and read input for num1 and num2
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Initialize temporary variable to hold num1 value for swap
    int temp = num1;

    num1 = num2; // num1 becomes num2
    num2 = temp; // num2 becomes num1 (temp = num1)

    // Print result
    printf("\nSwap\n\nFirst number is now: %d\nSecond number is now: %d\n\n", num1, num2);

    return 0;

}