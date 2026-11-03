
/*
    File Name: Simple_Maths.c
    Topic: Basic Mathematical Operations in C

    AIM:
    To perform basic arithmetic operations using C.

    INTRODUCTION:
    C provides arithmetic operators to perform
    mathematical calculations on numerical values.

    BASIC ARITHMETIC OPERATORS:

    +  Addition
    -  Subtraction
    *  Multiplication
    /  Division
    %  Modulus (remainder)

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 6;

    printf("BASIC MATHEMATICAL OPERATIONS IN C\n");
    printf("----------------------------------\n");

    // Addition
    printf("Addition:       %d + %d = %d\n", a, b, a + b);

    // Subtraction
    printf("Subtraction:    %d - %d = %d\n", a, b, a - b);

    // Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    // Integer division
    printf("Integer Division: %d / %d = %d\n", a, b, a / b);

    // Modulus (remainder)
    printf("Modulus:        %d %% %d = %d\n", a, b, a % b);

    // Floating-point division
    float x = 20.0f;
    float y = 6.0f;

    printf("Float Division: %.2f / %.2f = %.2f\n", x, y, x / y);

    return 0;
}

/*
    SAMPLE OUTPUT:

    BASIC MATHEMATICAL OPERATIONS IN C
    ----------------------------------
    Addition:       20 + 6 = 26
    Subtraction:    20 - 6 = 14
    Multiplication: 20 * 6 = 120
    Integer Division: 20 / 6 = 3
    Modulus:        20 % 6 = 2
    Float Division: 20.00 / 6.00 = 3.33


    IMPORTANT CONCEPTS:

    1. ADDITION (+):
       Adds two numbers.

    2. SUBTRACTION (-):
       Calculates the difference between two numbers.

    3. MULTIPLICATION (*):
       Multiplies two numbers.

    4. DIVISION (/):
       Divides one number by another.
       When both operands are integers, the fractional
       part of the result is discarded.

    5. MODULUS (%):
       Returns the remainder after integer division.
       It is used with integer operands.

    6. FLOATING-POINT DIVISION:
       Using float or double operands preserves
       the fractional part of the result.

    IMPORTANT:
    Never divide by zero because division by zero
    is undefined in C.

    CONCLUSION:
    Arithmetic operators make it possible to perform
    mathematical calculations in C programs.
*/
