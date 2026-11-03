
/*
    File Name: Bitwise_Operators.c
    Topic: Bitwise Operators in C

    AIM:
    To understand and demonstrate bitwise operators
    using integer values.

    INTRODUCTION:
    Bitwise operators perform operations on the
    individual bits of integer operands.

    OPERATORS:

    &   Bitwise AND
    |   Bitwise OR
    ^   Bitwise XOR
    ~   Bitwise NOT
    <<  Left Shift
    >>  Right Shift

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    unsigned int a = 12;
    unsigned int b = 10;

    printf("BITWISE OPERATORS IN C\n");
    printf("----------------------\n");

    printf("Value of a = %u\n", a);
    printf("Value of b = %u\n", b);

    // Bitwise AND
    printf("\nBitwise AND (a & b): %u\n", a & b);

    // Bitwise OR
    printf("Bitwise OR (a | b): %u\n", a | b);

    // Bitwise XOR
    printf("Bitwise XOR (a ^ b): %u\n", a ^ b);

    // Bitwise NOT
    printf("Bitwise NOT (~a): %u\n", ~a);

    // Left shift
    printf("Left Shift (a << 1): %u\n", a << 1);

    // Right shift
    printf("Right Shift (a >> 1): %u\n", a >> 1);

    return 0;
}

/*
    SAMPLE OUTPUT (COMMON SYSTEM):

    BITWISE OPERATORS IN C
    ----------------------
    Value of a = 12
    Value of b = 10

    Bitwise AND (a & b): 8
    Bitwise OR (a | b): 14
    Bitwise XOR (a ^ b): 6
    Bitwise NOT (~a): 4294967283
    Left Shift (a << 1): 24
    Right Shift (a >> 1): 6


    BINARY REPRESENTATION:

    a = 12 = 1100
    b = 10 = 1010

    1. BITWISE AND (&):

       1100
       1010
       ----
       1000 = 8

       Result bit is 1 only when both bits are 1.

    2. BITWISE OR (|):

       1100
       1010
       ----
       1110 = 14

       Result bit is 1 when at least one bit is 1.

    3. BITWISE XOR (^):

       1100
       1010
       ----
       0110 = 6

       Result bit is 1 when the two bits are different.

    4. BITWISE NOT (~):

       Reverses every bit of the operand.

       For unsigned integers, the result depends
       on the width of unsigned int.

    5. LEFT SHIFT (<<):

       Shifts bits towards the left.

       Example:
       12 << 1 = 24

    6. RIGHT SHIFT (>>):

       Shifts bits towards the right.

       Example:
       12 >> 1 = 6

    IMPORTANT:
    Bitwise operators work with integer types.
    Shift operations should use valid shift counts.
    The exact result of ~a depends on the width of
    unsigned int on the system.

    CONCLUSION:
    Bitwise operators are useful in low-level
    programming, embedded systems, hardware control,
    and efficient bit manipulation.
*/
