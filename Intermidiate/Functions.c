
#include <stdio.h>

// Function declarations (prototypes)
void greetUser(void);
int add(int a, int b);
int findSquare(int number);
float calculateAverage(float a, float b, float c);
int findMaximum(int a, int b);

// Main function
int main()
{
    int num1, num2, number;
    float a, b, c;

    printf("=== C Programming: Functions ===\n\n");

    // 1. Function without arguments and return value
    printf("1. Greeting Function\n");
    greetUser();

    // Taking input for addition
    printf("\n2. Addition Function\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", add(num1, num2));

    // 3. Function with argument and return value
    printf("\n3. Square Function\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square = %d\n", findSquare(number));

    // 4. Function with multiple arguments
    printf("\n4. Average Function\n");
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Average = %.2f\n",
           calculateAverage(a, b, c));

    // 5. Finding maximum using a function
    printf("\n5. Maximum Function\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", findMaximum(num1, num2));

    return 0;
}

// Function definition: No arguments, no return value
void greetUser(void)
{
    printf("Hello! Welcome to C Functions.\n");
}

// Function definition: Arguments and return value
int add(int a, int b)
{
    return a + b;
}

// Function definition: Calculates square
int findSquare(int number)
{
    return number * number;
}

// Function definition: Calculates average
float calculateAverage(float a, float b, float c)
{
    return (a + b + c) / 3.0f;
}

// Function definition: Finds maximum
int findMaximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
