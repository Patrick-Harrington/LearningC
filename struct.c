/*
    Struct -- written to practice basic use of structures. The structure 'Human' has its values 
    explicitely assigned to it and they are then printed to the terminal.

    Written by: Pat Harrington
    Date: 2/17/2024
*/

#include <stdio.h>
#include <string.h>

// Declare struct for Human
struct Human {
        char name[50];
        char dob[11];
        char eyeColor[10];
        int age;
        float height;
    };

int main()
{

    // Declare variable of type struct
    struct Human human1;

    // Assign values to fields of struct
    strcpy(human1.name, "John Smith");
    strcpy(human1.dob, "01/08/1994");
    strcpy(human1.eyeColor, "Brown");
    human1.age = 30;
    human1.height = 70.5;
    
    // Print Human 1 information to terminal
    printf("\nHuman 1:");
    printf("\n--------\n");
    printf("Name: %s\n", human1.name);
    printf("DOB: %s\n", human1.dob);
    printf("Eyes: %s\n", human1.eyeColor);
    printf("Age: %d\n", human1.age);
    printf("Height (in): %.1f\n\n", human1.height);

    return 0;

} // End main