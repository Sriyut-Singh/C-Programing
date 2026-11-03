
/*
    File Name: Printing.c
    Topic: Output and Printing in C

    AIM:
    To understand how to display text, variables,
    and different data types using printf().

    INTRODUCTION:
    printf() is a standard library function in C
    used to display output on the screen.

    It is declared in the stdio.h header file.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    // 1. Printing a simple message
    printf("Hello, World!\n");

    // 2. Printing text on separate lines
    printf("\nWelcome to C Programming.\n");
    printf("Learning C is interesting!\n");

    // 3. Printing integer values
    int age = 18;
    printf("\nInteger value: %d\n", age);

    // 4. Printing floating-point values
    float marks = 89.5f;
    printf("Float value: %.2f\n", marks);

    // 5. Printing double values
    double pi = 3.1415926535;
    printf("Double value: %.4f\n", pi);

    // 6. Printing a character
    char grade = 'A';
    printf("Character value: %c\n", grade);

    // 7. Printing a string
    char name[] = "Student";
    printf("String value: %s\n", name);

    // 8. Demonstrating escape sequences
    printf("\nESCAPE SEQUENCES:\n");

    printf("New line: First line\nSecond line\n");
    printf("Tab: Hello\tWorld\n");
    printf("Double quotes: \"C Programming\"\n");
    printf("Backslash: \\\n");

    return 0;
}

/*
    SAMPLE OUTPUT:

    Hello, World!

    Welcome to C Programming.
    Learning C is interesting!

    Integer value: 18
    Float value: 89.50
    Double value: 3.1416
    Character value: A
    String value: Student

    ESCAPE SEQUENCES:
    New line: First line
    Second line
    Tab: Hello    World
    Double quotes: "C Programming"
    Backslash: \


    IMPORTANT FORMAT SPECIFIERS:

    %d  - Integer
    %f  - Floating-point value
    %lf - Double (commonly used with scanf)
    %c  - Character
    %s  - String

    IMPORTANT ESCAPE SEQUENCES:

    \n  - Moves to a new line
    \t  - Inserts a horizontal tab
    \\  - Prints a backslash
    \"  - Prints double quotation marks

    CONCLUSION:
    printf() is used to display output in C.
    Format specifiers help print different data types,
    while escape sequences help format the output.
*/
