
/*
===============================================================================
                TWO-DIMENSIONAL ARRAYS IN C
===============================================================================

AIM:
To understand the declaration, initialization, input, output and manipulation
of two-dimensional arrays in C.

INTRODUCTION:
A two-dimensional (2D) array is a collection of elements arranged in rows
and columns. It is commonly used to represent matrices and tabular data.

SYNTAX:
    data_type array_name[rows][columns];

EXAMPLE:
    int matrix[3][3];

This creates a matrix containing 3 rows and 3 columns.

IMPORTANT CONCEPTS:
1. The first index represents the row.
2. The second index represents the column.
3. Nested loops are commonly used to traverse 2D arrays.
4. Array indexing starts from 0.

===============================================================================
*/

#include <stdio.h>

int main()
{
    // ---------------------------------------------------------
    // 1. DECLARATION OF A TWO-DIMENSIONAL ARRAY
    // ---------------------------------------------------------

    // Declaring a 3x3 integer matrix
    int matrix[3][3];

    int i, j;

    // ---------------------------------------------------------
    // 2. TAKING INPUT FROM THE USER
    // ---------------------------------------------------------

    printf("Enter 9 elements for a 3x3 matrix:\n");

    // Outer loop is used to traverse rows
    for (i = 0; i < 3; i++)
    {
        // Inner loop is used to traverse columns
        for (j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // ---------------------------------------------------------
    // 3. DISPLAYING THE MATRIX
    // ---------------------------------------------------------

    printf("\nThe entered matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // \t adds horizontal spacing between elements
            printf("%d\t", matrix[i][j]);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // ---------------------------------------------------------
    // 4. CALCULATING THE SUM OF ALL ELEMENTS
    // ---------------------------------------------------------

    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // Adding each element to the total sum
            sum += matrix[i][j];
        }
    }

    printf("\nSum of all matrix elements = %d\n", sum);

    // ---------------------------------------------------------
    // 5. CALCULATING THE SUM OF MAIN DIAGONAL ELEMENTS
    // ---------------------------------------------------------

    int diagonalSum = 0;

    // Main diagonal elements have equal row and column indices
    // Example: matrix[0][0], matrix[1][1], matrix[2][2]

    for (i = 0; i < 3; i++)
    {
        diagonalSum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", diagonalSum);

    // ---------------------------------------------------------
    // 6. DISPLAYING THE TRANSPOSE OF THE MATRIX
    // ---------------------------------------------------------

    printf("\nTranspose of the matrix:\n");

    // Transpose is obtained by interchanging rows and columns
    // matrix[i][j] becomes matrix[j][i]

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[j][i]);
        }

        printf("\n");
    }

    return 0;
}

/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

Enter 9 elements for a 3x3 matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9

The entered matrix is:
1       2       3
4       5       6
7       8       9

Sum of all matrix elements = 45
Sum of main diagonal elements = 15

Transpose of the matrix:
1       4       7
2       5       8
3       6       9

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
