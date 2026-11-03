
/*
    File Name: factorial_recursion.c
    Topic: Factorial Using Recursion in C

    AIM:
    To write a C program to calculate the factorial
    of a given number using recursion.

    INTRODUCTION:
    The factorial of a non-negative integer is the
    product of all positive integers from 1 to that number.

    It is represented by the symbol '!'.

    For example:

        5! = 5 x 4 x 3 x 2 x 1
           = 120

    SPECIAL CASE:

        0! = 1

    FACTORIAL FORMULA:

        n! = n x (n - 1)!

        0! = 1

    RECURSION:
    A recursive function calls itself with a smaller
    value until it reaches the base condition.

    BASE CONDITION:
        If n == 0 or n == 1, return 1.

    RECURSIVE CONDITION:
        Return n * factorial(n - 1).

    PROGRAM:
*/

#include <stdio.h>

// Function declaration
unsigned long long factorial(int n);

int main()
{
    int number;
    unsigned long long result;

    printf("----- FACTORIAL USING RECURSION -----\n");

    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &number);

    // Checking whether the input is valid
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (number > 20)
    {
        printf("Please enter a number between 0 and 20.\n");
    }
    else
    {
        result = factorial(number);

        printf("Factorial of %d = %llu\n", number, result);
    }

    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int n)
{
    // Base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive condition
    return n * factorial(n - 1);
}

/*
    SAMPLE OUTPUT 1:

    ----- FACTORIAL USING RECURSION -----
    Enter a non-negative integer (0-20): 5
    Factorial of 5 = 120


    SAMPLE OUTPUT 2:

    ----- FACTORIAL USING RECURSION -----
    Enter a non-negative integer (0-20): 0
    Factorial of 0 = 1


    SAMPLE OUTPUT 3:

    ----- FACTORIAL USING RECURSION -----
    Enter a non-negative integer (0-20): -3
    Factorial is not defined for negative numbers.


    RECURSION WORKING:

    Suppose the user enters 5.

        factorial(5)
             |
             v
        5 * factorial(4)
             |
             v
        5 * 4 * factorial(3)
             |
             v
        5 * 4 * 3 * factorial(2)
             |
             v
        5 * 4 * 3 * 2 * factorial(1)
             |
             v
        5 * 4 * 3 * 2 * 1
             |
             v
             120

    STEP-BY-STEP EXECUTION:

    1. factorial(5) calls factorial(4).
    2. factorial(4) calls factorial(3).
    3. factorial(3) calls factorial(2).
    4. factorial(2) calls factorial(1).
    5. factorial(1) returns 1.
    6. The pending multiplication operations execute
       as the recursive calls return.

    IMPORTANT POINTS:

    1. Factorial is defined only for non-negative integers.
    2. The factorial of 0 is always 1.
    3. The base condition prevents infinite recursion.
    4. Each recursive call uses stack memory.
    5. unsigned long long can safely store factorials
       up to 20! on commonly used C implementations.

    CONCLUSION:
    Recursion provides an easy way to calculate
    factorial by breaking the problem into smaller
    factorial calculations.

    NEXT TOPIC:
    Fibonacci Series Using Recursion.
*/
