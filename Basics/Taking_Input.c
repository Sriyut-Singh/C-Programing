
/*
    File Name: Taking_Input.c
    Topic: Taking User Input in C

    AIM:
    To understand how to accept input from users
    using the scanf() function.

    INTRODUCTION:
    scanf() is a standard input function in C.
    It allows users to enter values through the keyboard.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int age;
    float marks;
    char grade;
    char name[50];

    // Taking string input
    printf("Enter your name: ");

    if (scanf("%49s", name) != 1)
    {
        printf("Invalid name input.\n");
        return 1;
    }

    // Taking integer input
    printf("Enter your age: ");

    if (scanf("%d", &age) != 1)
    {
        printf("Invalid age input.\n");
        return 1;
    }

    // Taking floating-point input
    printf("Enter your marks: ");

    if (scanf("%f", &marks) != 1)
    {
        printf("Invalid marks input.\n");
        return 1;
    }

    // Taking character input
    printf("Enter your grade: ");

    if (scanf(" %c", &grade) != 1)
    {
        printf("Invalid grade input.\n");
        return 1;
    }

    // Displaying the entered information
    printf("\n----- STUDENT DETAILS -----\n");

    printf("Name:  %s\n", name);
    printf("Age:   %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}

/*
    SAMPLE OUTPUT:

    Enter your name: Rahul
    Enter your age: 19
    Enter your marks: 87.5
    Enter your grade: A

    ----- STUDENT DETAILS -----
    Name:  Rahul
    Age:   19
    Marks: 87.50
    Grade: A


    IMPORTANT CONCEPTS:

    1. scanf():
       Used to accept input from the keyboard.

    2. & OPERATOR:
       Used to provide the address of a variable
       to scanf() for storing the input.

    3. FORMAT SPECIFIERS:

       %d  - Integer
       %f  - Float
       %lf - Double
       %c  - Character
       %s  - String

    4. %49s:
       Reads at most 49 characters into a character
       array of size 50, leaving space for '\0'.

    5. " %c":
       The leading space skips whitespace characters
       such as the newline left by previous input.

    CONCLUSION:
    scanf() allows a C program to accept user input
    and perform operations using the entered values.
*/
