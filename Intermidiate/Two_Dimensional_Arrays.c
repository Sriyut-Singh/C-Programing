
#include <stdio.h>

int main()
{
    int matrix[3][3];
    int rowSum, columnSum;
    int totalSum = 0;

    printf("=== C Programming: Two-Dimensional Arrays ===\n\n");

    // Taking matrix input from the user
    printf("Enter 9 elements for the 3x3 matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying the matrix
    printf("\n--- Matrix ---\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", matrix[i][j]);
        }

        printf("\n");
    }

    // Calculating the sum of each row
    printf("\n--- Row Sums ---\n");

    for (int i = 0; i < 3; i++)
    {
        rowSum = 0;

        for (int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }

        printf("Sum of Row %d: %d\n", i + 1, rowSum);
        totalSum += rowSum;
    }

    // Calculating the sum of each column
    printf("\n--- Column Sums ---\n");

    for (int j = 0; j < 3; j++)
    {
        columnSum = 0;

        for (int i = 0; i < 3; i++)
        {
            columnSum += matrix[i][j];
        }

        printf("Sum of Column %d: %d\n", j + 1, columnSum);
    }

    // Displaying the total sum
    printf("\nTotal Sum of Matrix: %d\n", totalSum);

    return 0;
}
