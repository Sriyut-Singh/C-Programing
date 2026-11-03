
/*
    File Name: Break_Continue.c
    Topic: Break and Continue Statements in C

    AIM:
    To understand and demonstrate the break
    and continue statements in C.

    INTRODUCTION:
    break and continue are jump statements
    used to control the execution of loops.

    BREAK:
    Terminates the loop immediately.

    CONTINUE:
    Skips the remaining statements in the
    current iteration and starts the next one.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int i;

    // --------------------------------
    // 1. BREAK STATEMENT
    // --------------------------------

    printf("BREAK STATEMENT\n");
    printf("---------------\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("%d ", i);
    }

    printf("\n\n");


    // --------------------------------
    // 2. CONTINUE STATEMENT
    // --------------------------------

    printf("CONTINUE STATEMENT\n");
    printf("------------------\n");

    for (i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

/*
    SAMPLE OUTPUT:

    BREAK STATEMENT
    ---------------
    1 2 3 4 5

    CONTINUE STATEMENT
    ------------------
    1 2 3 4 5 7 8 9 10


    EXPLANATION:

    1. BREAK STATEMENT:

       The loop starts from 1 and runs up to 10.

       When i becomes 6, the break statement
       terminates the loop immediately.

       Therefore, only numbers 1 to 5 are printed.

    2. CONTINUE STATEMENT:

       The loop starts from 1 and runs up to 10.

       When i becomes 6, the continue statement
       skips the printf() statement for that iteration.

       The loop then continues with the next value.

       Therefore, all numbers except 6 are printed.

    DIFFERENCE:

    break:
    Completely terminates the loop.

    continue:
    Skips only the current iteration.

    IMPORTANT:
    break can also be used to exit a switch statement.
    continue is used with loops, not switch statements
    by themselves.

    CONCLUSION:
    break and continue provide better control over
    loop execution and help manage repetitive tasks.
*/
