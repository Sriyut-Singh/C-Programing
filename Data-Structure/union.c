
/*
===============================================================================
                              UNIONS IN C
===============================================================================

AIM:
To understand unions in C, their declaration, initialization, memory sharing
and differences between structures and unions.

INTRODUCTION:
A union is a user-defined data type in C that allows multiple members
of different data types to share the same memory location.

Unlike structures, where every member has its own memory space,
all members of a union share the same memory.

Only one member should hold a meaningful value at a time.

SYNTAX:

    union UnionName
    {
        data_type member1;
        data_type member2;
        data_type member3;
    };

DECLARATION:

    union UnionName variable;

IMPORTANT CONCEPTS:

1. All union members share the same memory.
2. The size of a union is based on its largest member, with possible
   additional padding for alignment.
3. Changing one member can overwrite the value represented by another.
4. Union members are accessed using the dot (.) operator.
5. A pointer to a union can access members using the arrow (->) operator.

STRUCTURE VS UNION:

STRUCTURE:
- Each member gets separate memory.
- All members can hold meaningful values simultaneously.
- Size is generally based on all members plus padding.

UNION:
- All members share memory.
- Only one member's stored value should be used at a time.
- Size is based on the largest member plus possible padding.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. DEFINING A UNION
// ---------------------------------------------------------

union Data
{
    int integerValue;
    float floatValue;
    char characterValue;
};

// ---------------------------------------------------------
// 2. DEFINING A STRUCTURE FOR COMPARISON
// ---------------------------------------------------------

struct DataStructure
{
    int integerValue;
    float floatValue;
    char characterValue;
};

int main()
{
    // ---------------------------------------------------------
    // 3. DECLARING A UNION VARIABLE
    // ---------------------------------------------------------

    union Data data;

    printf("========== UNION IN C ==========\n");

    // ---------------------------------------------------------
    // 4. STORING AND ACCESSING AN INTEGER VALUE
    // ---------------------------------------------------------

    data.integerValue = 100;

    printf("\nInteger Value: %d\n", data.integerValue);

    // ---------------------------------------------------------
    // 5. STORING AND ACCESSING A FLOAT VALUE
    // ---------------------------------------------------------

    // Writing to floatValue reuses the same memory.
    data.floatValue = 25.75;

    printf("\nFloat Value: %.2f\n", data.floatValue);

    // ---------------------------------------------------------
    // 6. STORING AND ACCESSING A CHARACTER VALUE
    // ---------------------------------------------------------

    // Writing to characterValue again reuses the same memory.
    data.characterValue = 'A';

    printf("\nCharacter Value: %c\n", data.characterValue);

    // NOTE:
    // After storing a new member, do not rely on the old member's value.
    // The previous representation may have been overwritten.

    // ---------------------------------------------------------
    // 7. DISPLAYING THE SIZE OF A UNION
    // ---------------------------------------------------------

    printf("\n========== MEMORY SIZE ==========\n");

    printf("Size of Union: %zu bytes\n", sizeof(data));

    // The union size is sufficient for its largest member,
    // including any padding required by the implementation.

    // ---------------------------------------------------------
    // 8. COMPARING UNION AND STRUCTURE SIZES
    // ---------------------------------------------------------

    struct DataStructure studentData;

    printf("\n========== STRUCTURE VS UNION ==========\n");

    printf("Size of Structure: %zu bytes\n",
           sizeof(studentData));

    printf("Size of Union    : %zu bytes\n",
           sizeof(data));

    // A structure allocates storage for all its members.
    // A union shares storage among all its members.

    // ---------------------------------------------------------
    // 9. ACCESSING UNION MEMBERS USING A POINTER
    // ---------------------------------------------------------

    union Data *ptr = &data;

    // Arrow operator is used to access union members through pointers.
    ptr->integerValue = 500;

    printf("\n========== UNION POINTER ==========\n");

    printf("Integer Value using Pointer: %d\n",
           ptr->integerValue);

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== UNION IN C ==========

Integer Value: 100

Float Value: 25.75

Character Value: A

========== MEMORY SIZE ==========
Size of Union: 4 bytes

========== STRUCTURE VS UNION ==========
Size of Structure: 12 bytes
Size of Union    : 4 bytes

========== UNION POINTER ==========
Integer Value using Pointer: 500

NOTE:
The displayed sizes are typical for systems where int and float occupy
4 bytes, char occupies 1 byte, and the structure uses 4-byte alignment.

Actual sizes may vary depending on the compiler and system.

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
