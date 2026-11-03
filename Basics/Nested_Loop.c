
/*
    File Name: Nested_Loop.c
    Topic: Nested Loops in C

    AIM:
    To understand the working of nested loops
    using a simple number pattern.

    INTRODUCTION:
    A nested loop is a loop placed inside another loop.

    The outer loop controls the number of rows,
    while the inner loop controls the number of
    columns or repetitions within each row.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("NUMBER PATTERN USING NESTED LOOPS\n\n");

    // Outer loop controls the rows
    for (i = 1; i <= 4; i++)
    {
        // Inner loop controls the columns
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

/*
    SAMPLE OUTPUT:

    NUMBER PATTERN USING NESTED LOOPS

    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5


    EXPLANATION:

    1. The outer loop executes 4 times (i = 1 to 4).
       Each execution represents one row.

    2. The inner loop executes 5 times (j = 1 to 5).
       Each execution prints one number.

    3. After the inner loop finishes, printf("\n")
       moves the cursor to the next line.

    4. The inner loop completes all 5 iterations
       for every single iteration of the outer loop.

    TOTAL EXECUTIONS:
    Outer loop iterations = 4
    Inner loop iterations per row = 5
    Total inner loop executions = 4 * 5 = 20

    CONCLUSION:
    Nested loops are useful for creating patterns,
    working with matrices, and performing repetitive
    operations involving rows and columns.
*/
