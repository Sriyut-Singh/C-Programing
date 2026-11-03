
/*
    File Name: recursion.c
    Topic: Recursion in C

    AIM:
    To understand recursion and learn how a function
    can call itself to solve a problem.

    INTRODUCTION:
    Recursion is a programming technique in which
    a function calls itself repeatedly until a
    particular condition is satisfied.

    A recursive function generally contains two parts:

    1. BASE CONDITION:
       The condition that stops the recursive calls.
       Without a proper base condition, recursion may
       continue indefinitely and cause stack overflow.

    2. RECURSIVE CONDITION:
       The part where the function calls itself with
       a smaller or simpler input.

    GENERAL SYNTAX:

        return_type function_name(parameters)
        {
            if (base_condition)
            {
                return value;
            }

            return function_name(modified_parameters);
        }

    PROGRAM:
*/

#include <stdio.h>

// Function declarations
void countdown(int n);
int sumOfNaturalNumbers(int n);
int power(int base, int exponent);

int main()
{
    int n, result;
    int base, exponent;

    // Example 1: Countdown using recursion
    printf("----- COUNTDOWN USING RECURSION -----\n");

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        countdown(n);
    }
    else
    {
        printf("Please enter a non-negative number.\n");
    }

    // Example 2: Sum of natural numbers
    printf("\n----- SUM OF NATURAL NUMBERS -----\n");

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        result = sumOfNaturalNumbers(n);

        printf("Sum of first %d natural numbers = %d\n",
               n, result);
    }
    else
    {
        printf("Please enter a positive number.\n");
    }

    // Example 3: Power using recursion
    printf("\n----- POWER USING RECURSION -----\n");

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent >= 0)
    {
        result = power(base, exponent);

        printf("%d raised to the power %d = %d\n",
               base, exponent, result);
    }
    else
    {
        printf("Please enter a non-negative exponent.\n");
    }

    return 0;
}

// Function to print numbers in descending order
void countdown(int n)
{
    // Base condition
    if (n == 0)
    {
        printf("0\n");
        return;
    }

    printf("%d\n", n);

    // Recursive call
    countdown(n - 1);
}

// Function to calculate the sum of natural numbers
int sumOfNaturalNumbers(int n)
{
    // Base condition
    if (n == 1)
    {
        return 1;
    }

    // Recursive condition
    return n + sumOfNaturalNumbers(n - 1);
}

// Function to calculate power using recursion
int power(int base, int exponent)
{
    // Base condition
    if (exponent == 0)
    {
        return 1;
    }

    // Recursive condition
    return base * power(base, exponent - 1);
}

/*
    SAMPLE OUTPUT:

    ----- COUNTDOWN USING RECURSION -----
    Enter a number: 5
    5
    4
    3
    2
    1
    0

    ----- SUM OF NATURAL NUMBERS -----
    Enter a positive number: 5
    Sum of first 5 natural numbers = 15

    ----- POWER USING RECURSION -----
    Enter the base: 2
    Enter the exponent: 4
    2 raised to the power 4 = 16

    EXPLANATION:

    Example 1: Countdown

        countdown(3)
             |
             v
        Print 3
             |
             v
        countdown(2)
             |
             v
        Print 2
             |
             v
        countdown(1)
             |
             v
        Print 1
             |
             v
        countdown(0)
             |
             v
        Print 0 and stop

    Example 2: Sum of Natural Numbers

        sum(5)
          |
          v
        5 + sum(4)
          |
          v
        5 + 4 + sum(3)
          |
          v
        5 + 4 + 3 + sum(2)
          |
          v
        5 + 4 + 3 + 2 + sum(1)
          |
          v
        5 + 4 + 3 + 2 + 1 = 15

    IMPORTANT POINTS:

    1. Recursion allows a function to call itself.
    2. Every recursive function needs a base condition.
    3. Each recursive call uses additional stack memory.
    4. Recursion can make complex problems easier to solve.
    5. Missing base conditions can cause stack overflow.

    CONCLUSION:
    Recursion is useful for solving problems that can
    be divided into smaller versions of the same problem.

    NEXT TOPIC:
    Factorial using Recursion.
*/
