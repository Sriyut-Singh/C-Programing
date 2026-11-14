
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int *zeroNumbers;
    int *temp;

    int i;

    printf("=== C Programming: Dynamic Memory Allocation ===\n\n");

    // 1. malloc() - Allocating memory
    printf("1. Memory Allocation Using malloc()\n");

    numbers = malloc(3 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 3 integers:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers stored using malloc(): ");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // 2. realloc() - Resizing allocated memory
    printf("\n2. Resizing Memory Using realloc()\n");

    temp = realloc(numbers, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    printf("Memory successfully resized for 5 integers.\n");

    numbers[3] = 40;
    numbers[4] = 50;

    printf("Updated array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // 3. calloc() - Allocating zero-initialized memory
    printf("\n3. Memory Allocation Using calloc()\n");

    zeroNumbers = calloc(4, sizeof(int));

    if (zeroNumbers == NULL)
    {
        printf("Memory allocation failed.\n");
        free(numbers);
        return 1;
    }

    printf("Initial values of calloc array: ");

    for (i = 0; i < 4; i++)
    {
        printf("%d ", zeroNumbers[i]);
    }

    printf("\n");

    // Assigning new values
    for (i = 0; i < 4; i++)
    {
        zeroNumbers[i] = (i + 1) * 10;
    }

    printf("Updated calloc array: ");

    for (i = 0; i < 4; i++)
    {
        printf("%d ", zeroNumbers[i]);
    }

    printf("\n");

    // 4. free() - Releasing allocated memory
    printf("\n4. Releasing Memory Using free()\n");

    free(numbers);
    numbers = NULL;

    free(zeroNumbers);
    zeroNumbers = NULL;

    printf("Dynamically allocated memory released successfully.\n");

    return 0;
}
