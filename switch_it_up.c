/*
    Switch It Up -- demonstrate basic use of a switch statement by allowing a user to choose an
    operator followed by two operands, then view the result.

    Written By : Pat Harrington
    Date 1/26/2024
*/

#include <stdio.h>

int main()
{

    char chosen_operator;
    double num1, num2;

    // Prompt user and read input
    printf("Choose an operator (+, -, *, /,): ");
    scanf("%c", &chosen_operator);

    printf("Choose 1st number: ");
    scanf("%lf", &num1);

    printf("Choose 2nd number: ");
    scanf("%lf", &num2);

    // Determine the correct expression based on user's chosen operator
    // Complete operation and print to terminal
    switch(chosen_operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
            break;
        case '/':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1/num2);
            break;
        default:
            printf("You have entered an incompatible operator.");
    }

    return 0;

} // End main