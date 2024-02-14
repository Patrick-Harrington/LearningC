#include <stdio.h>
#include <string.h>
#include <errno.h> // For use with perror() in line 13

int main() 
{

    FILE *file;
    char fileName[100];
    char buffer[100]; // Maximum number of characters read in a single operation

    // Prompt user and read input for file to be opened 
    printf("Enter the name of the file you'd like to open:\n\n > ");
    fgets(fileName, sizeof(fileName), stdin);

    // Remove newline character
    fileName[strcspn(fileName, "\n")] = '\0'; 

    // Open numbers.txt and read file
    file = fopen(fileName, "r");

    // Error handling for no file/directory found
    if (file == NULL) {
        perror("");
        return 1;
    }

    // Output formatting for file contents
    printf("\n\nContents of %s: \n\n", fileName);

    // Read file contents and print to terminal
    while (fread(buffer, sizeof(char), sizeof(buffer), file) > 0) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
    
} // End main