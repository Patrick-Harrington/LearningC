/*
    Visual Matrix -- written to provide a visual represenation of an array in the terminal. While 
    not the most efficient method of initialization, it helped solidify my understanding of arrays 
    and matrices along with the process of iterating through them.

    Written by: Pat Harrington
    Date: 2/1/2024
*/

#include <stdio.h>

int main()
{
    // Initialize matrix 3 x 3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;
    
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


/*

Output:

      [0] [1] [2]

 [0]   1   2   3

 [1]   4   5   6

 [2]   7   8   9

*/