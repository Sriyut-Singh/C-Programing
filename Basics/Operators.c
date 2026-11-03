
/*
    File Name: Operators.c
    Topic: Operators in C

    AIM:
    To understand and demonstrate arithmetic,
    relational, and logical operators in C.

    INTRODUCTION:
    Operators are symbols that perform operations
    on variables and values.

    TYPES COVERED:

    1. Arithmetic Operators
    2. Relational Operators
    3. Logical Operators

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 10;

    // --------------------------------
    // 1. ARITHMETIC OPERATORS
    // --------------------------------

    printf("ARITHMETIC OPERATORS\n");
    printf("--------------------\n");

    printf("Addition:       %d + %d = %d\n", a, b, a + b);
    printf("Subtraction:    %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division:       %d / %d = %d\n", a, b, a / b);
    printf("Modulus:        %d %% %d = %d\n", a, b, a % b);


    // --------------------------------
    // 2. RELATIONAL OPERATORS
    // --------------------------------

    printf("\nRELATIONAL OPERATORS\n");
    printf("--------------------\n");

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b:  %d\n", a > b);
    printf("a < b:  %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);


    // --------------------------------
    // 3. LOGICAL OPERATORS
    // --------------------------------

    printf("\nLOGICAL OPERATORS\n");
    printf("-----------------\n");

    printf("(a > 10 && b < 20): %d\n",
           (a > 10 && b < 20));

    printf("(a < 10 || b < 20): %d\n",
           (a < 10 || b < 20));

    printf("!(a > b): %d\n", !(a > b));

    return 0;
}

/*
    SAMPLE OUTPUT:

    ARITHMETIC OPERATORS
    --------------------
    Addition:       20 + 10 = 30
    Subtraction:    20 - 10 = 10
    Multiplication: 20 * 10 = 200
    Division:       20 / 10 = 2
    Modulus:        20 % 10 = 0

    RELATIONAL OPERATORS
    --------------------
    a == b: 0
    a != b: 1
    a > b:  1
    a < b:  0
    a >= b: 1
    a <= b: 0

    LOGICAL OPERATORS
    -----------------
    (a > 10 && b < 20): 1
    (a < 10 || b < 20): 1
    !(a > b): 0


    IMPORTANT CONCEPTS:

    1. ARITHMETIC OPERATORS:
       +   Addition
       -   Subtraction
       *   Multiplication
       /   Division
       %   Modulus

    2. RELATIONAL OPERATORS:
       ==  Equal to
       !=  Not equal to
       >   Greater than
       <   Less than
       >=  Greater than or equal to
       <=  Less than or equal to

       These operators return 1 for true
       and 0 for false.

    3. LOGICAL OPERATORS:
       &&  Logical AND
       ||  Logical OR
       !   Logical NOT

       AND: True only when both conditions are true.
       OR:  True when at least one condition is true.
       NOT: Reverses the logical result.

    IMPORTANT:
    Do not confuse = (assignment) with == (comparison).

    CONCLUSION:
    Operators are essential in C for performing
    calculations, comparing values, and combining
    multiple conditions.
*/
