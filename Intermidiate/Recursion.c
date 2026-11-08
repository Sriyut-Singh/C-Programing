
#include <stdio.h>

// Function declarations
unsigned long long factorial(int n);
int fibonacci(int n);
int sumOfDigits(int n);
void printNaturalNumbers(int n);

int main()
{
    int number;
    int terms;

    printf("=== C Programming: Recursion ===\n\n");

    // 1. Factorial using recursion
    printf("1. Factorial Using Recursion\n");
    printf("Enter a non-negative number (0-20): ");
    scanf("%d", &number);

    if (number >= 0 && number <= 20)
    {
        printf("Factorial of %d = %llu\n",
               number, factorial(number));
    }
    else
    {
        printf("Please enter a number between 0 and 20.\n");
    }

    // 2. Fibonacci series using recursion
    printf("\n2. Fibonacci Series Using Recursion\n");
    printf("Enter the number of terms (1-20): ");
    scanf("%d", &terms);

    if (terms >= 1 && terms <= 20)
    {
        printf("Fibonacci Series: ");

        for (int i = 0; i < terms; i++)
        {
            printf("%d ", fibonacci(i));
        }

        printf("\n");
    }
    else
    {
        printf("Please enter between 1 and 20 terms.\n");
    }

    // 3. Sum of digits using recursion
    printf("\n3. Sum of Digits Using Recursion\n");
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("Sum of digits = %d\n", sumOfDigits(number));
    }
    else
    {
        printf("Please enter a non-negative integer.\n");
    }

    // 4. Printing natural numbers using recursion
    printf("\n4. Natural Numbers Using Recursion\n");
    printf("Enter the last number (1-100): ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100)
    {
        printf("Natural Numbers: ");
        printNaturalNumbers(number);
        printf("\n");
    }
    else
    {
        printf("Please enter a number between 1 and 100.\n");
    }

    return 0;
}

// Function 1: Factorial
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return (unsigned long long)n * factorial(n - 1);
}

// Function 2: Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function 3: Sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

// Function 4: Print natural numbers
void printNaturalNumbers(int n)
{
    if (n == 0)
    {
        return;
    }

    printNaturalNumbers(n - 1);
    printf("%d ", n);
}
