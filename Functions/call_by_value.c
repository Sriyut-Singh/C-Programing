
/*
    File Name: call_by_value.c
    Topic: Call by Value in C

    AIM:
    To understand how call by value works in C and how
    changes made to function parameters do not affect
    the original variables.

    INTRODUCTION:
    In Call by Value, a copy of the actual argument is
    passed to the function.

    The function works with this copied value. Therefore,
    any changes made to the parameter inside the function
    do not change the original variable.

    SYNTAX:

        function_name(variable);

    IMPORTANT POINTS:
    1. The actual argument is the variable passed during
       the function call.
    2. The formal parameter is the variable that receives
       the copied value inside the function.
    3. Changes to the formal parameter do not affect the
       original variable.
    4. C uses call by value for passing arguments.

    PROGRAM:
*/

#include <stdio.h>

// Function declarations
void changeValue(int num);
int incrementValue(int num);
void swapValues(int a, int b);

int main()
{
    int number = 10;

    // Demonstrating call by value
    printf("Original value before function call: %d\n", number);

    changeValue(number);

    printf("Original value after function call: %d\n", number);

    // Demonstrating how a returned value can update
    // the original variable when assigned
    number = incrementValue(number);

    printf("\nValue after using return statement: %d\n", number);

    // Demonstrating call by value using two variables
    int x = 20, y = 30;

    printf("\nBefore calling swapValues():\n");
    printf("x = %d, y = %d\n", x, y);

    swapValues(x, y);

    printf("After calling swapValues():\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Function that changes its local copy of the argument
void changeValue(int num)
{
    num = 100;

    printf("Value inside changeValue(): %d\n", num);
}

// Function that returns an updated value
int incrementValue(int num)
{
    num = num + 1;

    return num;
}

// Function that attempts to swap two values
// Only the local copies of a and b are swapped
void swapValues(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Values inside swapValues(): x = %d, y = %d\n", a, b);
}

/*
    SAMPLE OUTPUT:

    Original value before function call: 10
    Value inside changeValue(): 100
    Original value after function call: 10

    Value after using return statement: 11

    Before calling swapValues():
    x = 20, y = 30
    Values inside swapValues(): x = 30, y = 20
    After calling swapValues():
    x = 20, y = 30

    CONCLUSION:
    Call by Value passes copies of variables to functions.

    Therefore, modifications made inside a function do not
    affect the original variables.

    To modify original variables through a function, we
    can use pointers. This is demonstrated in the next
    program: call_by_reference.c.
*/
