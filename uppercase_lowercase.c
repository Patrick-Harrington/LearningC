/*
    Uppercase/Lowercase -- takes the user's input as a string and conversts all uppercase 
    characters to lowercase and lowercase to uppercase. Written to make use of the ctype.h
    header file and practice the input-process-output. 

    Written by: Pat Harrington
    Date: 2/8/2024
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    char userString[100];

    // Prompt user and read input
    printf("Enter text (up to 99 characters):\n\n>");
    fgets(userString, sizeof(userString), stdin);

    // Output formatting
    printf(">");

/*  Set i to 0 (begin iteration at first index),
    While userString at index i is not null enter loop,
    Increment by 1 to assess every index  */
    for (int i = 0; userString[i] != '\0'; i++) {
        if (islower(userString[i])) { // If character at index i is lowercase
            printf("%c", toupper(userString[i])); // Change to uppercase
        } else if (isupper(userString[i])) { // If character at index i is uppercase
            printf("%c", tolower(userString[i])); // Change to lowercase
        } else { // Account for other characters
            printf("%c", userString[i]); // Print them as is
        }
    }

    // Output formatting
    printf("\n");

    return 0;

} // End main
