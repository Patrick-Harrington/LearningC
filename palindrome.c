/*
    Palindrome -- accepts user input in the form of a string and determines whether is is a 
    palindrome (the same forward/backward). 

    Written by: Pat Harrington
    Date: 2/9/2024
*/

#include <stdio.h>

int main()
{

    char userString[100]; 
    int i, j; 

    // Prompt user and read input
    printf("\nEnter a string to check if it is a palindrome:\n\n > ");
    fgets(userString, sizeof(userString), stdin);

    // Assign user input to array
    for (i = 0; userString[i] != '\0'; i++);

    // Get range of index for userString
    j = i - 2;
    i = 0;

    while (i <= j) {
        if (userString[i] == userString[j]){ // Condition 1
            i++;
            j--;
        } else {
            printf("\n No it isn't.\n\n"); // Condition 2
            return 0; // Exit program
        }
    }

    printf("\n Yes it is!\n\n"); // Print Condition 1

    return 0;

} // End main