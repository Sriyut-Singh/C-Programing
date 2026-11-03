
/*
    File Name: function_pointers.c
    Topic: Function Pointers in C

    AIM:
    To understand function pointers and learn how to
    call functions using pointers.

    INTRODUCTION:
    A function pointer is a pointer that stores the
    address of a function instead of storing the
    address of an ordinary variable.

    It allows us to call a function indirectly through
    its memory address.

    SYNTAX:

        return_type (*pointer_name)(parameter_types);

    EXAMPLE:

        int (*ptr)(int, int);

    Here:
        int       -> Return type of the function.
        ptr       -> Name of the function pointer.
        int, int  -> Parameter types.

    IMPORTANT POINTS:

    1. A function pointer stores the address of a function.
    2. The pointer's return type and parameter types must
       match the function being assigned to it.
    3. A function can be called using the pointer name.
    4. Function pointers are useful for callbacks and
       selecting functions dynamically.

    PROGRAM:
*/

#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Function that accepts another function as an argument
void calculate(int a, int b, int (*operation)(int, int));

int main()
{
    int x = 20, y = 10;
    int result;

    // Declaring a function pointer
    int (*ptr)(int, int);

    printf("----- FUNCTION POINTERS IN C -----\n");

    // Assigning the address of add() to the pointer
    ptr = add;

    result = ptr(x, y);

    printf("\nAddition using function pointer: %d\n", result);

    // Assigning the address of subtract() to the pointer
    ptr = subtract;

    result = ptr(x, y);

    printf("Subtraction using function pointer: %d\n", result);

    // Assigning the address of multiply() to the pointer
    ptr = multiply;

    result = ptr(x, y);

    printf("Multiplication using function pointer: %d\n", result);

    // Assigning the address of divide() to the pointer
    ptr = divide;

    result = ptr(x, y);

    printf("Division using function pointer: %d\n", result);

    // Passing functions as arguments
    printf("\n----- FUNCTION POINTER AS ARGUMENT -----\n");

    calculate(x, y, add);
    calculate(x, y, multiply);

    return 0;
}

// Function to perform addition
int add(int a, int b)
{
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b)
{
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b)
{
    return a * b;
}

// Function to perform division
int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Division by zero is not allowed.\n");
        return 0;
    }

    return a / b;
}

// Function that receives a function pointer
void calculate(int a, int b, int (*operation)(int, int))
{
    int result;

    result = operation(a, b);

    printf("Result = %d\n", result);
}

/*
    SAMPLE OUTPUT:

    ----- FUNCTION POINTERS IN C -----

    Addition using function pointer: 30
    Subtraction using function pointer: 10
    Multiplication using function pointer: 200
    Division using function pointer: 2

    ----- FUNCTION POINTER AS ARGUMENT -----
    Result = 30
    Result = 200


    EXPLANATION:

    Consider this declaration:

        int (*ptr)(int, int);

    It declares a function pointer named ptr.

    It can store the address of functions that:
        1. Return an integer.
        2. Accept two integer arguments.

    ASSIGNING A FUNCTION:

        ptr = add;

    This stores the address of the add() function
    in the function pointer.

    CALLING A FUNCTION:

        result = ptr(20, 10);

    This calls the add() function through ptr.

    ALTERNATIVE SYNTAX:

        result = (*ptr)(20, 10);

    Both forms call the function through the pointer.

    FUNCTION POINTER AS AN ARGUMENT:

        calculate(20, 10, add);

    Here, the address of add() is passed to calculate().

    The calculate() function uses the received pointer
    to execute the selected operation.


    CONCLUSION:

    1. Function pointers store function addresses.
    2. They allow indirect function calls.
    3. They can be passed as arguments to other functions.
    4. They are useful for callback functions,
       menu-driven programs and flexible program design.

    END OF FUNCTIONS FOLDER.
*/
