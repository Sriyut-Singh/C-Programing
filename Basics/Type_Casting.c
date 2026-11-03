
/*
    File Name: Type_Casting.c
    Topic: Type Casting and Type Conversion in C

    AIM:
    To understand implicit and explicit type
    conversion in the C programming language.

    INTRODUCTION:
    Type conversion means changing a value from
    one data type to another.

    TYPES:

    1. Implicit Type Conversion
    2. Explicit Type Casting

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    // --------------------------------
    // 1. IMPLICIT TYPE CONVERSION
    // --------------------------------

    printf("IMPLICIT TYPE CONVERSION\n");
    printf("------------------------\n");

    int a = 10;
    float b = 5.5f;

    // Integer is automatically converted to float
    float result1 = a + b;

    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Addition result: %.2f\n", result1);


    // --------------------------------
    // 2. EXPLICIT TYPE CASTING
    // --------------------------------

    printf("\nEXPLICIT TYPE CASTING\n");
    printf("---------------------\n");

    float x = 10.75f;

    // Explicitly converting float to int
    int y = (int)x;

    printf("Original float value: %.2f\n", x);
    printf("After casting to int: %d\n", y);


    // --------------------------------
    // 3. INTEGER TO FLOAT CONVERSION
    // --------------------------------

    printf("\nINTEGER TO FLOAT CONVERSION\n");
    printf("---------------------------\n");

    int num1 = 7;
    int num2 = 2;

    // Integer division
    float division1 = num1 / num2;

    // Explicit casting before division
    float division2 = (float)num1 / num2;

    printf("Without casting: %.2f\n", division1);
    printf("With casting: %.2f\n", division2);

    return 0;
}

/*
    SAMPLE OUTPUT:

    IMPLICIT TYPE CONVERSION
    ------------------------
    Integer value: 10
    Float value: 5.50
    Addition result: 15.50

    EXPLICIT TYPE CASTING
    ---------------------
    Original float value: 10.75
    After casting to int: 10

    INTEGER TO FLOAT CONVERSION
    ---------------------------
    Without casting: 3.00
    With casting: 3.50


    EXPLANATION:

    1. IMPLICIT TYPE CONVERSION:

       The compiler automatically converts one data
       type into another when required.

       Example:
       int a = 10;
       float b = a;

       Here, the integer value is converted to float.

    2. EXPLICIT TYPE CASTING:

       The programmer manually converts a value
       using the casting operator.

       Syntax:
       (data_type) expression

       Example:
       float x = 10.75f;
       int y = (int)x;

       The fractional part is discarded.

    3. INTEGER DIVISION:

       When both operands are integers, division
       produces an integer result.

       Example:
       7 / 2 = 3

       Casting one operand to float allows
       floating-point division.

       Example:
       (float)7 / 2 = 3.5

    IMPORTANT:
    Converting a floating-point value to an integer
    discards the fractional part; it does not round
    the value to the nearest integer.

    CONCLUSION:
    Type conversion allows different data types
    to work together in expressions and calculations.
*/
