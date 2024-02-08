/*
    Pattern -- written to continue the use of nested loops. The program will print an additional
    '*' on a new line so long as the limit, set using i, is not reached.

    Written by: Pat Harrington
    Date: 2/8/2024
*/

#include <stdio.h>

int main()
{

    char pattern = '*';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", pattern);
        } // End inner loop

        // Format pattern to start new line after each increment of i
        printf("\n");

    } // End outer loop

    return 0;

} // End main