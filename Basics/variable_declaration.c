
/*
    File Name: variable_declaration.c
    Topic: Variables and Data Types in C

    AIM:
    To understand variable declaration,
    initialization, and basic data types in C.

    INTRODUCTION:
    A variable is a named memory location used
    to store data during program execution.

    SYNTAX:
    data_type variable_name;

    EXAMPLE:
    int age;

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    // 1. Integer data type
    int age = 18;

    // 2. Character data type
    char grade = 'A';

    // 3. Float data type
    float percentage = 89.5f;

    // 4. Double data type
    double pi = 3.1415926535;

    // 5. Character array (string)
    char name[] = "Student";

    // Displaying variable values
    printf("VARIABLES AND DATA TYPES IN C\n");
    printf("-----------------------------\n");

    printf("Name:       %s\n", name);
    printf("Age:        %d\n", age);
    printf("Grade:      %c\n", grade);
    printf("Percentage: %.2f\n", percentage);
    printf("Value of Pi: %.6f\n", pi);

    // Demonstrating variable modification
    age = 19;

    printf("\nAfter modifying age:\n");
    printf("Updated age: %d\n", age);

    // Displaying memory sizes
    printf("\nMEMORY SIZE OF DATA TYPES\n");
    printf("-------------------------\n");

    printf("Size of int:    %zu bytes\n", sizeof(int));
    printf("Size of char:   %zu byte\n", sizeof(char));
    printf("Size of float:  %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}

/*
    SAMPLE OUTPUT (COMMON SYSTEM):

    VARIABLES AND DATA TYPES IN C
    -----------------------------
    Name:       Student
    Age:        18
    Grade:      A
    Percentage: 89.50
    Value of Pi: 3.141593

    After modifying age:
    Updated age: 19

    MEMORY SIZE OF DATA TYPES
    -------------------------
    Size of int:    4 bytes
    Size of char:   1 byte
    Size of float:  4 bytes
    Size of double: 8 bytes


    IMPORTANT CONCEPTS:

    1. VARIABLE DECLARATION:
       Creating a variable by specifying its data type
       and name.

       Example: int age;

    2. VARIABLE INITIALIZATION:
       Assigning an initial value to a variable.

       Example: int age = 18;

    3. BASIC DATA TYPES:

       int:
       Stores integer values.

       char:
       Stores a single character.

       float:
       Stores floating-point values with single precision.

       double:
       Stores floating-point values with greater precision
       than float.

    4. STRING:
       C does not have a built-in string data type.
       Strings are commonly represented using character
       arrays ending with the null character '\0'.

    5. sizeof OPERATOR:
       Returns the size of a data type or object
       in bytes.

    IMPORTANT:
    The exact sizes of int, float and double can vary
    depending on the implementation and platform.
    The values shown in the sample output are common,
    but not guaranteed on every system.

    CONCLUSION:
    Variables and data types are fundamental concepts
    in C because they allow programs to store and
    manipulate different kinds of data.
*/
