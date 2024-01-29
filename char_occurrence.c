/*
    Char Occurrence -- written to demonstrate string iteration. The program reads a string 
    from the user, then counts the number of times a character (chosen by the user) occurs
    in the string. 

    Written by: Pat Harrington
    Date: 1/29/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char inputString[100];
    char searchChar;
    int count = 0;

    // Promput user and read string
    printf("Enter a string (100 characters max): ");
    fgets(inputString, sizeof(inputString), stdin);

    // Prompt user and read character to be counted
    printf("Enter character to count: ");
    scanf(" %c", &searchChar);

    // Count occurrences of character within string
    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == searchChar) {
            count++;
        } 
    }

    // Print result to terminal
    printf("Occurrences of '%c' in string: %d\n", searchChar, count);

    return 0;

} // End main