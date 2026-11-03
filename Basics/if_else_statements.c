
/*
    File Name: if_else_statements.c
    Topic: Conditional Statements in C

    AIM:
    To understand the use of if, if-else,
    and else-if statements in C.

    INTRODUCTION:
    Conditional statements are used to make decisions
    in a program based on specified conditions.

    TYPES DEMONSTRATED:

    1. if statement
    2. if-else statement
    3. if-else-if ladder

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int number;

    // Taking input from the user
    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    // 1. IF STATEMENT
    if (number > 0)
    {
        printf("\nThe number is positive.\n");
    }

    // 2. IF-ELSE STATEMENT
    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    // 3. IF-ELSE-IF LADDER
    if (number > 0)
    {
        printf("The number is greater than zero.\n");
    }
    else if (number < 0)
    {
        printf("The number is less than zero.\n");
    }
    else
    {
        printf("The number is equal to zero.\n");
    }

    return 0;
}

/*
    SAMPLE OUTPUT 1:

    Enter an integer: 10

    The number is positive.
    The number is even.
    The number is greater than zero.


    SAMPLE OUTPUT 2:

    Enter an integer: -7

    The number is odd.
    The number is less than zero.


    SAMPLE OUTPUT 3:

    Enter an integer: 0

    The number is even.
    The number is equal to zero.


    EXPLANATION:

    1. IF STATEMENT:
       Executes a block only when the condition is true.

    2. IF-ELSE STATEMENT:
       Executes the if block when the condition is true.
       Otherwise, executes the else block.

    3. ELSE-IF LADDER:
       Checks multiple conditions one after another.
       The first true condition's block is executed.

    IMPORTANT OPERATORS:

    >   Greater than
    <   Less than
    ==  Equal to
    !=  Not equal to
    >=  Greater than or equal to
    <=  Less than or equal to

    CONCLUSION:
    Conditional statements control the flow of a
    program by allowing it to make decisions.
*/
