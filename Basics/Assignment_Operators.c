
/*
    File Name: Assignment_Operators.c
    Topic: Assignment Operators in C

    AIM:
    To understand and demonstrate different
    assignment operators in C.

    INTRODUCTION:
    Assignment operators are used to assign values
    to variables and perform operations while
    updating their values.

    TYPES COVERED:

    =   Simple assignment
    +=  Addition assignment
    -=  Subtraction assignment
    *=  Multiplication assignment
    /=  Division assignment
    %=  Modulus assignment

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int a = 20;

    printf("ASSIGNMENT OPERATORS IN C\n");
    printf("-------------------------\n");

    // Simple assignment
    a = 20;
    printf("Initial value: a = %d\n", a);

    // Addition assignment
    a += 5;
    printf("After a += 5: a = %d\n", a);

    // Subtraction assignment
    a -= 3;
    printf("After a -= 3: a = %d\n", a);

    // Multiplication assignment
    a *= 2;
    printf("After a *= 2: a = %d\n", a);

    // Division assignment
    a /= 4;
    printf("After a /= 4: a = %d\n", a);

    // Modulus assignment
    a %= 3;
    printf("After a %%= 3: a = %d\n", a);

    return 0;
}

/*
    SAMPLE OUTPUT:

    ASSIGNMENT OPERATORS IN C
    -------------------------
    Initial value: a = 20
    After a += 5: a = 25
    After a -= 3: a = 22
    After a *= 2: a = 44
    After a /= 4: a = 11
    After a %= 3: a = 2


    EXPLANATION:

    1. SIMPLE ASSIGNMENT (=):
       Assigns a value to a variable.

       Example: a = 20;

    2. ADDITION ASSIGNMENT (+=):
       Adds a value to the variable.

       Example: a += 5;
       Equivalent to: a = a + 5;

    3. SUBTRACTION ASSIGNMENT (-=):
       Subtracts a value from the variable.

       Example: a -= 3;
       Equivalent to: a = a - 3;

    4. MULTIPLICATION ASSIGNMENT (*=):
       Multiplies the variable by a value.

       Example: a *= 2;
       Equivalent to: a = a * 2;

    5. DIVISION ASSIGNMENT (/=):
       Divides the variable by a value.

       Example: a /= 4;
       Equivalent to: a = a / 4;

    6. MODULUS ASSIGNMENT (%=):
       Stores the remainder after division.

       Example: a %= 3;
       Equivalent to: a = a % 3;

    IMPORTANT:
    The modulus assignment operator works with
    integer operands. Avoid division by zero.

    CONCLUSION:
    Assignment operators make it easier to update
    variable values and write shorter expressions.
*/
