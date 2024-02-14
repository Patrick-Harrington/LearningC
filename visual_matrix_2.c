 /*
    Write a C Program to accept input and print out a 2Dimensional Array of size 3 X 3

    Written by: Pat Harrington
    Date: 2/13/2024
*/

#include <stdio.h>

int main()
{
    // Declare matrix 3 x 3
    int matrix[3][3];

    int i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Format table header for array index
    printf("\n      [0] [1] [2]\n\n");

    for (i = 0; i < 3; i++) {

        // Format table row lables for array index
        if (i < 1) {
            printf(" [0]");
        } else if (i < 2) {
            printf(" [1]");
        } else {
            printf(" [2]");
        } // End if

        // Print array
        for (j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);
        } // End inner loop

        // Output formatting - space between rows in terminal
        printf("\n\n");
    } // End out loop

    // Output formatting - space above prompt in terminal
    printf("\n");

    return 0;

} // End main