
/*
    File Name: Increment_Decrement.c
    Topic: Increment and Decrement Operators in C

    AIM:
    To understand and demonstrate increment
    and decrement operators in C.

    INTRODUCTION:
    Increment and decrement operators are used
    to increase or decrease the value of a variable
    by exactly one.

    TYPES:

    1. Pre-increment  (++a)
    2. Post-increment (a++)
    3. Pre-decrement  (--a)
    4. Post-decrement (a--)

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b;

    printf("INCREMENT AND DECREMENT OPERATORS\n");
    printf("---------------------------------\n");

    // 1. Pre-increment
    a = 10;
    b = ++a;

    printf("\nPRE-INCREMENT (++a)\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // 2. Post-increment
    a = 10;
    b = a++;

    printf("\nPOST-INCREMENT (a++)\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // 3. Pre-decrement
    a = 10;
    b = --a;

    printf("\nPRE-DECREMENT (--a)\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // 4. Post-decrement
    a = 10;
    b = a--;

    printf("\nPOST-DECREMENT (a--)\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    return 0;
}

/*
    SAMPLE OUTPUT:

    INCREMENT AND DECREMENT OPERATORS
    ---------------------------------

    PRE-INCREMENT (++a)
    Value of a: 11
    Value of b: 11

    POST-INCREMENT (a++)
    Value of a: 11
    Value of b: 10

    PRE-DECREMENT (--a)
    Value of a: 9
    Value of b: 9

    POST-DECREMENT (a--)
    Value of a: 9
    Value of b: 10


    EXPLANATION:

    1. PRE-INCREMENT (++a):
       First increases the value of a by 1,
       then uses the updated value.

    2. POST-INCREMENT (a++):
       First uses the current value of a,
       then increases it by 1.

    3. PRE-DECREMENT (--a):
       First decreases the value of a by 1,
       then uses the updated value.

    4. POST-DECREMENT (a--):
       First uses the current value of a,
       then decreases it by 1.

    COMPARISON:

    Operator     Meaning
    --------     -------
    ++a          Increment first, then use
    a++          Use first, then increment
    --a          Decrement first, then use
    a--          Use first, then decrement

    CONCLUSION:
    Increment and decrement operators simplify
    operations that increase or decrease a variable
    by one.
*/
