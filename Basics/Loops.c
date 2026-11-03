
/*
    File Name: Loops.c
    Topic: Looping Statements in C

    AIM:
    To understand the three basic looping statements
    available in the C programming language.

    INTRODUCTION:
    Loops are used to execute a block of statements
    repeatedly as long as a specified condition is true.

    TYPES OF LOOPS:

    1. FOR LOOP:
       Used when the number of iterations is known.
       It contains initialization, condition and update.

    2. WHILE LOOP:
       Checks the condition before executing the loop body.
       It may execute zero times if the condition is false.

    3. DO-WHILE LOOP:
       Checks the condition after executing the loop body.
       It executes at least once, even if the condition
       is initially false.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int i;

    // --------------------------------
    // 1. FOR LOOP
    // --------------------------------

    printf("FOR LOOP:\n");

    // Initialization: i = 1
    // Condition: i <= 5
    // Update: i++

    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }


    // --------------------------------
    // 2. WHILE LOOP
    // --------------------------------

    printf("\n\nWHILE LOOP:\n");

    // Initialize the counter
    i = 1;

    // Condition is checked before execution
    while (i <= 5)
    {
        printf("%d ", i);

        // Increment the counter
        i++;
    }


    // --------------------------------
    // 3. DO-WHILE LOOP
    // --------------------------------

    printf("\n\nDO-WHILE LOOP:\n");

    // Initialize the counter
    i = 1;

    do
    {
        printf("%d ", i);

        // Increment the counter
        i++;

    } while (i <= 5);

    printf("\n");

    return 0;
}

/*
    SAMPLE OUTPUT:

    FOR LOOP:
    1 2 3 4 5

    WHILE LOOP:
    1 2 3 4 5

    DO-WHILE LOOP:
    1 2 3 4 5


    DIFFERENCE BETWEEN LOOPS:

    FOR LOOP:
    Initialization, condition and update are written
    together in the loop statement.

    WHILE LOOP:
    The condition is checked before executing the body.

    DO-WHILE LOOP:
    The condition is checked after executing the body.
    Therefore, it executes at least once.


    IMPORTANT:
    Always update the loop variable when necessary.
    Otherwise, the loop may become an infinite loop.

    CONCLUSION:
    Loops make programs shorter, more efficient and
    easier to understand by avoiding repeated statements.
*/
