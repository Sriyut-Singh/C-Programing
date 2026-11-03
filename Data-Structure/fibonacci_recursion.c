
/*
    File Name: fibonacci_recursion.c
    Topic: Fibonacci Series Using Recursion in C

    AIM:
    To write a C program to generate the Fibonacci series
    using a recursive function.

    INTRODUCTION:
    The Fibonacci series is a sequence of numbers in
    which each number is the sum of the previous two numbers.

    The series starts with:

        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

    FIBONACCI FORMULA:

        F(0) = 0
        F(1) = 1

        F(n) = F(n - 1) + F(n - 2)

    RECURSION:
    A recursive function calls itself to calculate
    the previous two Fibonacci numbers.

    BASE CONDITIONS:
        If n == 0, return 0.
        If n == 1, return 1.

    RECURSIVE CONDITION:
        Return fibonacci(n - 1) + fibonacci(n - 2).

    PROGRAM:
*/

#include <stdio.h>

// Function declaration
unsigned long long fibonacci(int n);

int main()
{
    int terms, i;

    printf("----- FIBONACCI SERIES USING RECURSION -----\n");

    printf("Enter the number of terms (1-40): ");
    scanf("%d", &terms);

    // Checking input validity
    if (terms < 1 || terms > 40)
    {
        printf("Please enter a number between 1 and 40.\n");
        return 0;
    }

    printf("\nFibonacci Series:\n");

    // Generating the Fibonacci series
    for (i = 0; i < terms; i++)
    {
        printf("%llu ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

// Recursive function to calculate Fibonacci numbers
unsigned long long fibonacci(int n)
{
    // First base condition
    if (n == 0)
    {
        return 0;
    }

    // Second base condition
    if (n == 1)
    {
        return 1;
    }

    // Recursive condition
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
    SAMPLE OUTPUT 1:

    ----- FIBONACCI SERIES USING RECURSION -----
    Enter the number of terms (1-40): 10

    Fibonacci Series:
    0 1 1 2 3 5 8 13 21 34


    SAMPLE OUTPUT 2:

    ----- FIBONACCI SERIES USING RECURSION -----
    Enter the number of terms (1-40): 5

    Fibonacci Series:
    0 1 1 2 3


    RECURSION WORKING:

    Suppose we calculate fibonacci(5).

        fibonacci(5)
          |
          +---- fibonacci(4)
          |       |
          |       +---- fibonacci(3)
          |       |
          |       +---- fibonacci(2)
          |
          +---- fibonacci(3)
                  |
                  +---- fibonacci(2)
                  |
                  +---- fibonacci(1)

    CALCULATION:

        fibonacci(5)
        = fibonacci(4) + fibonacci(3)
        = 3 + 2
        = 5

    IMPORTANT POINTS:

    1. The Fibonacci series begins with 0 and 1.
    2. Every next term is the sum of the previous
       two terms.
    3. The function uses two base conditions.
    4. Each recursive call creates another function call.
    5. This simple recursive method repeats many
       calculations, making it inefficient for large inputs.

    TIME COMPLEXITY:

        Approximately O(2^n)

    NOTE:
    More efficient approaches include iteration and
    recursion with memoization.

    CONCLUSION:
    The Fibonacci series is a common example of recursion
    because every term depends on the two previous terms.

    NEXT TOPIC:
    Function Pointers in C.
*/
