
/*
===============================================================================
                         TYPEDEF IN C
===============================================================================

AIM:
To understand the typedef keyword in C and learn how to create alternative
names (aliases) for existing data types.

INTRODUCTION:
The typedef keyword in C is used to give a new name to an existing data type.

It does not create a completely new data type. Instead, it provides an
alternative name that makes declarations easier to read and write.

SYNTAX:

    typedef existing_data_type new_name;

EXAMPLE:

    typedef unsigned int uint;

    uint age = 20;

IMPORTANT CONCEPTS:

1. typedef creates an alias for an existing data type.
2. It improves code readability.
3. It simplifies structure declarations.
4. It can be used with pointers and arrays.
5. It does not allocate memory by itself.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. TYPEDEF WITH BASIC DATA TYPES
// ---------------------------------------------------------

// Creating an alias 'Integer' for the int data type.
typedef int Integer;

// Creating an alias 'Decimal' for the float data type.
typedef float Decimal;

// ---------------------------------------------------------
// 2. TYPEDEF WITH STRUCTURES
// ---------------------------------------------------------

// Defining a structure and creating its alias Student.

typedef struct
{
    char name[50];
    int rollNumber;
    float marks;
} Student;

// With typedef, we can declare a structure variable simply as:
//
// Student s1;
//
// Instead of:
//
// struct Student s1;
//
// ---------------------------------------------------------
// 3. TYPEDEF WITH POINTERS
// ---------------------------------------------------------

// Creating an alias 'IntPointer' for a pointer to int.
typedef int *IntPointer;

// ---------------------------------------------------------
// 4. TYPEDEF WITH ARRAYS
// ---------------------------------------------------------

// Creating an alias for an array of 5 integers.
typedef int NumberArray[5];

int main()
{
    // ---------------------------------------------------------
    // 5. USING TYPEDEF WITH BASIC DATA TYPES
    // ---------------------------------------------------------

    Integer age = 20;
    Decimal percentage = 85.5;

    printf("========== TYPEDEF WITH BASIC DATA TYPES ==========\n");

    printf("Age        : %d\n", age);
    printf("Percentage : %.2f\n", percentage);

    // ---------------------------------------------------------
    // 6. USING TYPEDEF WITH STRUCTURES
    // ---------------------------------------------------------

    Student s1 = {"Rahul", 101, 92.5};

    printf("\n========== TYPEDEF WITH STRUCTURES ==========\n");

    printf("Student Name : %s\n", s1.name);
    printf("Roll Number  : %d\n", s1.rollNumber);
    printf("Marks        : %.2f\n", s1.marks);

    // ---------------------------------------------------------
    // 7. USING TYPEDEF WITH POINTERS
    // ---------------------------------------------------------

    int number = 100;

    // IntPointer is an alias for int*.
    IntPointer ptr = &number;

    printf("\n========== TYPEDEF WITH POINTERS ==========\n");

    printf("Original Value : %d\n", number);
    printf("Value using Pointer : %d\n", *ptr);

    // Modifying the original variable through the pointer.
    *ptr = 200;

    printf("Updated Value : %d\n", number);

    // ---------------------------------------------------------
    // 8. USING TYPEDEF WITH ARRAYS
    // ---------------------------------------------------------

    NumberArray numbers = {10, 20, 30, 40, 50};

    printf("\n========== TYPEDEF WITH ARRAYS ==========\n");

    printf("Array Elements: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== TYPEDEF WITH BASIC DATA TYPES ==========
Age        : 20
Percentage : 85.50

========== TYPEDEF WITH STRUCTURES ==========
Student Name : Rahul
Roll Number  : 101
Marks        : 92.50

========== TYPEDEF WITH POINTERS ==========
Original Value : 100
Value using Pointer : 100
Updated Value : 200

========== TYPEDEF WITH ARRAYS ==========
Array Elements: 10 20 30 40 50

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
