
/*
===============================================================================
                       POINTERS TO STRUCTURES IN C
===============================================================================

AIM:
To understand how pointers are used with structures and how structure
members can be accessed and modified using pointers.

INTRODUCTION:
A pointer is a variable that stores the memory address of another variable.

A structure pointer is a pointer that stores the address of a structure
variable.

Structure pointers are useful for:
1. Accessing structure members efficiently.
2. Modifying structure data using pointers.
3. Passing structures to functions without copying the entire structure.
4. Implementing linked lists, trees and other data structures.

DECLARATION SYNTAX:

    struct StructureName *pointer_name;

ASSIGNING ADDRESS:

    pointer_name = &structure_variable;

ACCESSING MEMBERS:

    (*pointer_name).member;

OR

    pointer_name->member;

IMPORTANT:
The arrow operator (->) is a shorthand method of accessing structure
members through a pointer.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. DEFINING A STRUCTURE
// ---------------------------------------------------------

struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

// ---------------------------------------------------------
// 2. FUNCTION TO DISPLAY STUDENT DETAILS
// ---------------------------------------------------------

// A pointer to a structure is passed as an argument.
// This avoids passing a complete copy of the structure.

void displayStudent(struct Student *ptr)
{
    printf("\n========== STUDENT DETAILS ==========\n");

    printf("Name        : %s\n", ptr->name);
    printf("Roll Number : %d\n", ptr->rollNumber);
    printf("Marks       : %.2f\n", ptr->marks);
}

// ---------------------------------------------------------
// 3. FUNCTION TO UPDATE STUDENT MARKS
// ---------------------------------------------------------

// The function receives the address of the structure.
// Changes made through the pointer affect the original variable.

void updateMarks(struct Student *ptr, float newMarks)
{
    ptr->marks = newMarks;
}

int main()
{
    // ---------------------------------------------------------
    // 4. DECLARING AND INITIALIZING A STRUCTURE VARIABLE
    // ---------------------------------------------------------

    struct Student student = {"Rahul", 101, 85.5};

    // ---------------------------------------------------------
    // 5. DECLARING A STRUCTURE POINTER
    // ---------------------------------------------------------

    // ptr is a pointer that stores the address of student.
    struct Student *ptr;

    ptr = &student;

    printf("POINTERS TO STRUCTURES IN C\n");
    printf("---------------------------\n");

    // ---------------------------------------------------------
    // 6. DISPLAYING THE ADDRESS OF THE STRUCTURE
    // ---------------------------------------------------------

    printf("\nAddress of student structure: %p\n", (void *)&student);
    printf("Value stored in ptr         : %p\n", (void *)ptr);

    // Both addresses should be the same because ptr stores
    // the address of the student structure.

    // ---------------------------------------------------------
    // 7. ACCESSING MEMBERS USING THE DOT AND DEREFERENCE OPERATORS
    // ---------------------------------------------------------

    // (*ptr).member accesses a structure member through a pointer.

    printf("\n========== USING (*ptr).member ==========\n");

    printf("Name        : %s\n", (*ptr).name);
    printf("Roll Number : %d\n", (*ptr).rollNumber);
    printf("Marks       : %.2f\n", (*ptr).marks);

    // ---------------------------------------------------------
    // 8. ACCESSING MEMBERS USING THE ARROW OPERATOR
    // ---------------------------------------------------------

    // The arrow operator (->) is a shorter alternative to (*ptr).member.

    printf("\n========== USING ARROW OPERATOR ==========\n");

    printf("Name        : %s\n", ptr->name);
    printf("Roll Number : %d\n", ptr->rollNumber);
    printf("Marks       : %.2f\n", ptr->marks);

    // ---------------------------------------------------------
    // 9. MODIFYING STRUCTURE MEMBERS USING A POINTER
    // ---------------------------------------------------------

    printf("\n========== MODIFYING STUDENT DATA ==========\n");

    // Updating marks through the structure pointer.
    ptr->marks = 95.0;

    printf("Updated Marks: %.2f\n", student.marks);

    // Notice that the original structure variable is also updated.

    // ---------------------------------------------------------
    // 10. PASSING STRUCTURE POINTER TO A FUNCTION
    // ---------------------------------------------------------

    printf("\n========== PASSING POINTER TO FUNCTION ==========\n");

    displayStudent(ptr);

    // Updating marks using a separate function.
    updateMarks(ptr, 98.5);

    printf("\nAfter updating marks through function:\n");

    displayStudent(ptr);

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

POINTERS TO STRUCTURES IN C
---------------------------

Address of student structure: 0x...
Value stored in ptr         : 0x...

========== USING (*ptr).member ==========
Name        : Rahul
Roll Number : 101
Marks       : 85.50

========== USING ARROW OPERATOR ==========
Name        : Rahul
Roll Number : 101
Marks       : 85.50

========== MODIFYING STUDENT DATA ==========
Updated Marks: 95.00

========== PASSING POINTER TO FUNCTION ==========

========== STUDENT DETAILS ==========
Name        : Rahul
Roll Number : 101
Marks       : 95.00

After updating marks through function:

========== STUDENT DETAILS ==========
Name        : Rahul
Roll Number : 101
Marks       : 98.50

NOTE:
The memory address will vary depending on the system and execution.

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
