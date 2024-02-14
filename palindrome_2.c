/*
    Palindrome 2 -- taking the same logic used in Palindrome, the function isPalindrome
    is now defined outside the main function and is called upon in main. This reinforced 
    the understanding that returning 0 within a function exits the function, not the 
    program as a whole. Defining the function outside main also improved the output structure
    for Yes/No.

    Written by: Pat Harrington
    Date: 2/10/2024
*/

#include <stdio.h>

int isPalindrome(char userString[]) {
    
    int i, j;

    // Assign user input to array
    for (i = 0; userString[i] != '\0'; i++);

    // Get range of index for userString
    j = i - 2; // Account for newline character and final increment before exiting loop
    i = 0; // Reset i to 0 

    // Determine if palindrome
    while (i <= j) {
        if (userString[i] == userString[j]){ // Condition 1 (is a palindrome)
            i++;
            j--;
        } else { // Condition 2 (is not a palindome)
            return 0; // Exit isPalindrome
        }
    }

} // End isPalindrome

int main()
{

    char userString[100]; 

    // Prompt user and read input
    printf("\nEnter a string to check if it is a palindrome:\n\n > ");
    fgets(userString, sizeof(userString), stdin);

    // Print result 
    if (isPalindrome(userString)) {
        printf("\n   Yes it is!\n\n");
    } else {
        printf("\n   No it isnt.\n\n");
    }

    return 0;

} // End main