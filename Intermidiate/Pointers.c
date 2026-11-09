
#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    int a = 20;
    int b = 30;

    int *firstPtr = &a;
    int *secondPtr = &b;

    printf("=== C Programming: Pointers ===\n\n");

    // 1. Displaying a variable and its address
    printf("1. Variable and Memory Address\n");
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);

    // 2. Accessing a value through a pointer
    printf("\n2. Accessing Value Using Pointer\n");
    printf("Pointer stores address: %p\n", (void *)ptr);
    printf("Value accessed through pointer: %d\n", *ptr);

    // 3. Modifying a variable through a pointer
    printf("\n3. Modifying Value Using Pointer\n");
    *ptr = 50;

    printf("Updated value of number: %d\n", number);

    // 4. Using multiple pointers
    printf("\n4. Working with Multiple Pointers\n");
    printf("Value of a: %d\n", *firstPtr);
    printf("Value of b: %d\n", *secondPtr);

    // 5. Swapping values using pointers
    printf("\n5. Swapping Values Using Pointers\n");

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    int temp = *firstPtr;
    *firstPtr = *secondPtr;
    *secondPtr = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // 6. Checking a NULL pointer
    printf("\n6. NULL Pointer\n");

    int *nullPtr = NULL;

    if (nullPtr == NULL)
    {
        printf("The pointer is NULL.\n");
    }
    else
    {
        printf("The pointer contains a valid address.\n");
    }

    return 0;
}
