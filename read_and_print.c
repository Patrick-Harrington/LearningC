/*
    Read and Print -- written to understand the basics of reading and printing the contents of a file.
    Intended to serve as a building block to later process the contents of a file. The file being
    read is explicitly given in the fopen() function and its contents are simply printed to the
    terminal. Also, use of the errno.h header file provides some experience in error handling.

    Written by: Pat Harrington
    Date: 2/2/2024
*/

#include <stdio.h>
#include <errno.h> // For user with perror() in line 13

int main() {
    FILE *file;
    char buffer[100]; // Maximum number of characters read in a single operation

    // Open numbers.txt and read file
    file = fopen("numbers.txt", "r");

    // Error handling for no file/directory found
    if (file == NULL) {
        perror("");
        return 1;
    }

    // Read file contents and print to terminal
    while (fread(buffer, sizeof(char), sizeof(buffer), file) > 0) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
    
} // End main