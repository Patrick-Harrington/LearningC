/*
    Area Calc -- written to allow a user to calculate the area of circles, squares, and triangles. This
    pogram demonstrates the ability to provide multipel choices for the user, then make decisions based
    on their choice. It utilizes the additional library 'math.h' and a symbolic constant. 

    Written by: Pat Harrington
    Date: 1/27/2024
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14f

int main()
{

    char shape;
    float radius, side, base, height, cArea, sArea, tArea;

    // Welcome message/prompt user and read input for shape
    printf("\nWelcome to Area Calc!\n\n'c' for circle\n's' for square\n't' for triangle\n\nChoose shape: ");
    scanf("%c", &shape);

    // Based on chosen shape, calculate area and print result to terminal
    switch(shape) {
        case 'c':
            printf("\nEnter radius: ");
            scanf("%f", &radius);
            cArea = PI * pow(radius, 2); // Calculate area of circle
            printf("\nArea: %.2f\n\n", cArea);
            break;
        case 's':
            printf("\nEnter side length: ");
            scanf("%f", &side);
            sArea = side * side; // Calculate area of square
            printf("\nArea: %.2f\n\n", sArea);
            break;
        case 't':
            printf("\nEnter base length: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            tArea = (base * height) / 2; // Calculate area of triangle
            printf("\nArea: %.2f\n\n", tArea);
            break;
        default:
            printf("\nPlease enter 'c' for circle, 's' for square, or 't' for triangle.\n\n");
    
    } // End switch

    return 0;

} // End main