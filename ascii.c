/*
    ascii -- written to quickly determine the decimal and hexidecimal value of any character.
    This program represents a basic understanding of ASCII, basic input/output, as well as
    implicit casting.

    Written By: Pat Harrington
    Date: 1/27/2024
*/

#include <stdio.h>

int main() 
{

    char myChar;

    // Prompt user and read input
    printf("\nEnter a single character to see its decimal and hex values:\n> ");
    scanf("%c", &myChar);

    // Print chart to terminal
    printf("\n| char | dec | hex |\n");
    printf("|  %c   | %d  | %X  |\n", myChar, myChar, myChar); // Demonstrate implicit casting
    printf("\n");

    return 0;

} // End main