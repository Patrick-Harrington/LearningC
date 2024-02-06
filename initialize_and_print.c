/*
	Initialize and Print -- written simply to initialize an array using a for loop.
	The array is declared, initialized, and printed.

	Written by: Pat Harrington
	Date: 2/6/2024	
*/

#include <stdio.h>

int main()
{

	int i, myArray[100];
	
	// Initialize and print values
	for (i=0;i<100;i++) {
		myArray[i] = i + 1;
		printf(" %d", myArray[i]);
	}

	// Formatting
	printf("\n");

	return 0;

} // End main
