/*
    Pointer -- a simple program that demonstrates the concept of pointers by
    declaring a variable, then a pointer, then printing the address.

    Written by: Pat Harrington
    Date: 2/17/2024
*/

#include <stdio.h>

int main()
{

    // Declare variable
    int myInt;

    // Create pointer
    int *myPointer = &myInt;

    // Print the address
    printf("\nAddress: %p\n\n", myPointer);

    return 0;

} // End main