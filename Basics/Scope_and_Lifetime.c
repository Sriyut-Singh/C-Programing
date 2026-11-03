
/*
    File Name: Scope_and_Lifetime.c
    Topic: Scope and Lifetime of Variables in C

    AIM:
    To understand the scope and lifetime of variables
    in the C programming language.

    INTRODUCTION:
    Scope determines where a variable can be accessed
    in a program.

    Lifetime determines how long a variable exists
    during program execution.

    CONCEPTS COVERED:

    1. Local Variables
    2. Global Variables
    3. Block Scope
    4. Static Local Variables

    PROGRAM:
*/

#include <stdio.h>

// --------------------------------
// GLOBAL VARIABLE
// --------------------------------

// Accessible throughout this source file
int globalVar = 100;


// --------------------------------
// FUNCTION WITH STATIC VARIABLE
// --------------------------------

void counter(void)
{
    // Static variable retains its value
    // between function calls
    static int count = 0;

    count++;

    printf("Counter value: %d\n", count);
}


int main(void)
{
    // --------------------------------
    // 1. LOCAL VARIABLE
    // --------------------------------

    int localVar = 50;

    printf("SCOPE AND LIFETIME IN C\n");
    printf("-----------------------\n");

    printf("\n1. LOCAL VARIABLE\n");
    printf("Local variable: %d\n", localVar);


    // --------------------------------
    // 2. GLOBAL VARIABLE
    // --------------------------------

    printf("\n2. GLOBAL VARIABLE\n");
    printf("Global variable: %d\n", globalVar);


    // --------------------------------
    // 3. BLOCK SCOPE
    // --------------------------------

    printf("\n3. BLOCK SCOPE\n");

    {
        int blockVar = 25;

        printf("Inside block: %d\n", blockVar);
    }

    // blockVar cannot be accessed here
    printf("Block variable is no longer accessible here.\n");


    // --------------------------------
    // 4. STATIC LOCAL VARIABLE
    // --------------------------------

    printf("\n4. STATIC LOCAL VARIABLE\n");

    counter();
    counter();
    counter();

    return 0;
}

/*
    SAMPLE OUTPUT:

    SCOPE AND LIFETIME IN C
    -----------------------

    1. LOCAL VARIABLE
    Local variable: 50

    2. GLOBAL VARIABLE
    Global variable: 100

    3. BLOCK SCOPE
    Inside block: 25
    Block variable is no longer accessible here.

    4. STATIC LOCAL VARIABLE
    Counter value: 1
    Counter value: 2
    Counter value: 3


    EXPLANATION:

    1. LOCAL VARIABLE:

       A variable declared inside a function or block
       is generally accessible only within that scope.

       Example:
       int localVar = 50;

    2. GLOBAL VARIABLE:

       A variable declared outside all functions
       has file scope and can be accessed by functions
       after its declaration within the source file.

       Example:
       int globalVar = 100;

    3. BLOCK SCOPE:

       A variable declared inside a block enclosed
       by curly braces is accessible only within
       that block.

       Example:
       {
           int blockVar = 25;
       }

    4. STATIC LOCAL VARIABLE:

       A static local variable retains its value
       between function calls.

       Example:
       static int count = 0;

       It is initialized only once and exists
       throughout the program's execution.

    DIFFERENCE BETWEEN SCOPE AND LIFETIME:

    SCOPE:
    Determines where a variable can be accessed.

    LIFETIME:
    Determines how long the variable exists
    during program execution.

    IMPORTANT:
    A local automatic variable normally has block
    scope and exists only during execution of its
    enclosing block.

    A static local variable has block scope but
    static storage duration.

    CONCLUSION:
    Understanding scope and lifetime helps manage
    variables properly and write organized,
    efficient C programs.
*/
