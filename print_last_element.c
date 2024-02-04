/*
    Print the Last Element -- Regardless of the total elements in myArray[], lastElement will
    print the value of the last element by calulcating total elements and subtracting 1 to 
    get the index. Written to make use of the sizeof() function.

    Written by: Patrick Harrington
    Date: 2/3/2024
*/

#include <stdio.h>

int main()
{
    // Add or subtract elements to verify function of lastElement
    int myArray[] = {45,12,78,23,56,34,91,8,67,19,42,73,5,88,27,61,14};

    // Determine index of last element
    int lastElement = (sizeof(myArray)/sizeof(myArray[0])) - 1;

    // Print value of last element
    printf("%d\n", myArray[lastElement]);

} // End main