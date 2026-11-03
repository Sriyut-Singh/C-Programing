
/*
===============================================================================
                           FUNCTIONS IN C
===============================================================================

AIM:
To understand the concept of functions in C and learn how to declare,
define, call and use functions with parameters and return values.

INTRODUCTION:
A function is a block of code designed to perform a specific task.

Functions help divide a large program into smaller and manageable parts.

ADVANTAGES OF FUNCTIONS:
1. Code reusability.
2. Better program organization.
3. Easier debugging and testing.
4. Reduces code repetition.
5. Improves readability and maintainability.

THREE MAIN COMPONENTS OF A FUNCTION:

1. FUNCTION DECLARATION (PROTOTYPE):
   It informs the compiler about the function name, return type and parameters.

2. FUNCTION CALL:
   It executes the function whenever it is called.

3. FUNCTION DEFINITION:
   It contains the actual statements that perform the task.

SYNTAX:

    return_type function_name(parameters);

    return_type function_name(parameters)
    {
        // Statements
        return value;
    }

TYPES OF FUNCTIONS BASED ON ARGUMENTS AND RETURN VALUES:

1. No arguments and no return value.
2. Arguments and no return value.
3. No arguments but returns a value.
4. Arguments and returns a value.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. FUNCTION DECLARATIONS (FUNCTION PROTOTYPES)
// ---------------------------------------------------------

// These declarations inform the compiler about the functions.

void greet();

void displaySum(int a, int b);

int getNumber();

int multiply(int a, int b);


// ---------------------------------------------------------
// 2. MAIN FUNCTION
// ---------------------------------------------------------

int main()
{
    printf("========== FUNCTIONS IN C ==========\n");

    // ---------------------------------------------------------
    // EXAMPLE 1: FUNCTION WITHOUT ARGUMENTS AND RETURN VALUE
    // ---------------------------------------------------------

    // Calling the greet() function.
    greet();


    // ---------------------------------------------------------
    // EXAMPLE 2: FUNCTION WITH ARGUMENTS AND NO RETURN VALUE
    // ---------------------------------------------------------

    int x = 10;
    int y = 20;

    // Passing x and y as arguments to the function.
    displaySum(x, y);


    // ---------------------------------------------------------
    // EXAMPLE 3: FUNCTION WITHOUT ARGUMENTS BUT WITH RETURN VALUE
    // ---------------------------------------------------------

    // Calling getNumber() and storing its returned value.
    int number = getNumber();

    printf("\nNumber returned by function: %d\n", number);


    // ---------------------------------------------------------
    // EXAMPLE 4: FUNCTION WITH ARGUMENTS AND RETURN VALUE
    // ---------------------------------------------------------

    int result = multiply(5, 6);

    printf("\nMultiplication Result: %d\n", result);


    // ---------------------------------------------------------
    // 3. CALLING THE SAME FUNCTION MULTIPLE TIMES
    // ---------------------------------------------------------

    // Functions can be reused whenever required.

    printf("\n========== FUNCTION REUSABILITY ==========\n");

    printf("Product of 4 and 5: %d\n", multiply(4, 5));

    printf("Product of 7 and 8: %d\n", multiply(7, 8));

    printf("Product of 9 and 3: %d\n", multiply(9, 3));

    return 0;
}


// ---------------------------------------------------------
// 4. FUNCTION DEFINITIONS
// ---------------------------------------------------------


// FUNCTION 1: NO ARGUMENTS AND NO RETURN VALUE

void greet()
{
    printf("\nHello! Welcome to C Programming.\n");
}


// FUNCTION 2: ARGUMENTS BUT NO RETURN VALUE

void displaySum(int a, int b)
{
    // The function receives two integer arguments.
    int sum = a + b;

    printf("\n========== SUM FUNCTION ==========\n");

    printf("First Number  : %d\n", a);
    printf("Second Number : %d\n", b);
    printf("Sum           : %d\n", sum);
}


// FUNCTION 3: NO ARGUMENTS BUT RETURNS A VALUE

int getNumber()
{
    // Returning an integer value to the calling function.
    return 100;
}


// FUNCTION 4: ARGUMENTS AND RETURN VALUE

int multiply(int a, int b)
{
    // Multiplying the two arguments.
    int product = a * b;

    // Returning the calculated result.
    return product;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== FUNCTIONS IN C ==========

Hello! Welcome to C Programming.

========== SUM FUNCTION ==========
First Number  : 10
Second Number : 20
Sum           : 30

Number returned by function: 100

Multiplication Result: 30

========== FUNCTION REUSABILITY ==========
Product of 4 and 5: 20
Product of 7 and 8: 56
Product of 9 and 3: 27

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
