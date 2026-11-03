
/*
    File Name: call_by_reference.c
    Topic: Call by Reference Using Pointers in C

    AIM:
    To understand how pointers can be used to modify
    the original values of variables inside a function.

    INTRODUCTION:
    In C, arguments are always passed by value.

    However, we can achieve reference-like behaviour by
    passing the addresses of variables to a function.

    The function receives pointer variables that store
    the addresses of the original variables.

    Using the dereference operator (*), we can access
    and modify the values stored at those addresses.

    SYNTAX:

        function_name(&variable);

    IMPORTANT OPERATORS:

    1. & (Address Operator):
       Returns the memory address of a variable.

    2. * (Dereference Operator):
       Accesses or modifies the value stored at an address.

    PROGRAM:
*/

#include <stdio.h>

// Function declarations
void changeValue(int *num);
void swapNumbers(int *a, int *b);
void addNumbers(int *a, int *b);

int main()
{
    int number = 10;

    // Demonstrating modification of original variable
    printf("Before calling changeValue(): %d\n", number);

    changeValue(&number);

    printf("After calling changeValue(): %d\n", number);

    // Demonstrating swapping using pointers
    int x = 20;
    int y = 30;

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swapNumbers(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Demonstrating modification of two variables
    int a = 15;
    int b = 25;

    printf("\nBefore addition:\n");
    printf("a = %d, b = %d\n", a, b);

    addNumbers(&a, &b);

    printf("After addition:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Function that modifies the original variable
void changeValue(int *num)
{
    *num = 100;
}

// Function that swaps two original variables
void swapNumbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// Function that modifies two original variables
void addNumbers(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
}

/*
    SAMPLE OUTPUT:

    Before calling changeValue(): 10
    After calling changeValue(): 100

    Before swapping:
    x = 20, y = 30
    After swapping:
    x = 30, y = 20

    Before addition:
    a = 15, b = 25
    After addition:
    a = 40, b = 15

    CONCLUSION:

    1. Pointers store the memory addresses of variables.
    2. The address operator (&) passes the address
       of a variable to a function.
    3. The dereference operator (*) accesses the original
       value stored at that address.
    4. Changes made through pointers affect the original
       variables.

    NOTE:
    C does not have true call by reference.
    It achieves reference-like behaviour by passing
    pointer values to functions.

    NEXT TOPIC:
    Recursion in C.
*/
