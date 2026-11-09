
#include <stdio.h>
#include <stddef.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr = numbers;
    int *start = &numbers[0];
    int *end = &numbers[4];

    printf("=== C Programming: Pointer Arithmetic ===\n\n");

    // 1. Accessing array elements using pointers
    printf("1. Accessing Array Elements Using Pointers\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = %d\n", i, *(ptr + i));
    }

    // 2. Pointer increment
    printf("\n2. Pointer Increment\n");

    ptr = numbers;

    printf("Current value: %d\n", *ptr);

    ptr++;

    printf("After increment: %d\n", *ptr);

    // 3. Pointer decrement
    printf("\n3. Pointer Decrement\n");

    ptr--;

    printf("After decrement: %d\n", *ptr);

    // 4. Pointer addition
    printf("\n4. Pointer Addition\n");

    ptr = numbers;

    printf("Value at ptr + 2: %d\n", *(ptr + 2));
    printf("Value at ptr + 4: %d\n", *(ptr + 4));

    // 5. Pointer subtraction
    printf("\n5. Pointer Subtraction\n");

    printf("Difference between end and start: %td\n",
           end - start);

    // 6. Traversing an array using pointer arithmetic
    printf("\n6. Traversing Array Using Pointers\n");

    for (ptr = numbers; ptr <= end; ptr++)
    {
        printf("%d ", *ptr);
    }

    printf("\n");

    // 7. Size of pointer and data type
    printf("\n7. Pointer Size Information\n");

    printf("Size of integer: %zu bytes\n", sizeof(int));
    printf("Size of integer pointer: %zu bytes\n", sizeof(ptr));

    return 0;
}
