
/*
===============================================================================
                         NESTED STRUCTURES IN C
===============================================================================

AIM:
To understand nested structures in C and learn how to access members of
one structure that is declared inside another structure.

INTRODUCTION:
A nested structure is a structure that contains another structure as one
of its members.

It is useful when related information needs to be grouped together.

For example, a student may have:
    1. Personal information
    2. Academic information
    3. Address information

Instead of storing everything in a single structure, we can create separate
structures and combine them using nested structures.

SYNTAX:

    struct Inner
    {
        data_type member1;
        data_type member2;
    };

    struct Outer
    {
        data_type member;
        struct Inner variable;
    };

ACCESSING NESTED MEMBERS:

    outer_variable.inner_variable.member;

IMPORTANT CONCEPTS:
1. Declaring multiple structures.
2. Nesting one structure inside another.
3. Accessing nested members using the dot (.) operator.
4. Taking and displaying nested structure data.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. DEFINING THE ADDRESS STRUCTURE
// ---------------------------------------------------------

struct Address
{
    char city[50];
    char state[50];
    int pinCode;
};

// ---------------------------------------------------------
// 2. DEFINING THE ACADEMIC STRUCTURE
// ---------------------------------------------------------

struct Academic
{
    char course[50];
    int semester;
    float cgpa;
};

// ---------------------------------------------------------
// 3. DEFINING THE STUDENT STRUCTURE
// ---------------------------------------------------------

// Student structure contains Address and Academic structures.
// This is an example of nested structures.

struct Student
{
    char name[50];
    int rollNumber;

    struct Address address;
    struct Academic academic;
};

int main()
{
    // ---------------------------------------------------------
    // 4. DECLARING A STRUCTURE VARIABLE
    // ---------------------------------------------------------

    struct Student student;

    // ---------------------------------------------------------
    // 5. TAKING STUDENT PERSONAL INFORMATION
    // ---------------------------------------------------------

    printf("========== STUDENT INFORMATION ==========\n");

    printf("\nEnter Student Name: ");
    scanf(" %49[^\n]", student.name);

    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);

    // ---------------------------------------------------------
    // 6. TAKING ADDRESS INFORMATION
    // ---------------------------------------------------------

    printf("\n========== ADDRESS INFORMATION ==========\n");

    printf("Enter City: ");
    scanf(" %49[^\n]", student.address.city);

    printf("Enter State: ");
    scanf(" %49[^\n]", student.address.state);

    printf("Enter PIN Code: ");
    scanf("%d", &student.address.pinCode);

    // ---------------------------------------------------------
    // 7. TAKING ACADEMIC INFORMATION
    // ---------------------------------------------------------

    printf("\n========== ACADEMIC INFORMATION ==========\n");

    printf("Enter Course: ");
    scanf(" %49[^\n]", student.academic.course);

    printf("Enter Semester: ");
    scanf("%d", &student.academic.semester);

    printf("Enter CGPA: ");
    scanf("%f", &student.academic.cgpa);

    // ---------------------------------------------------------
    // 8. DISPLAYING COMPLETE STUDENT INFORMATION
    // ---------------------------------------------------------

    printf("\n\n========== STUDENT DETAILS ==========\n");

    // Accessing normal members of Student structure
    printf("Name        : %s\n", student.name);
    printf("Roll Number : %d\n", student.rollNumber);

    // Accessing members of the nested Address structure
    printf("\n---------- ADDRESS DETAILS ----------\n");

    printf("City        : %s\n", student.address.city);
    printf("State       : %s\n", student.address.state);
    printf("PIN Code    : %d\n", student.address.pinCode);

    // Accessing members of the nested Academic structure
    printf("\n---------- ACADEMIC DETAILS ----------\n");

    printf("Course      : %s\n", student.academic.course);
    printf("Semester    : %d\n", student.academic.semester);
    printf("CGPA        : %.2f\n", student.academic.cgpa);

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== STUDENT INFORMATION ==========

Enter Student Name: Rahul Sharma
Enter Roll Number: 101

========== ADDRESS INFORMATION ==========
Enter City: Chandigarh
Enter State: Punjab
Enter PIN Code: 160001

========== ACADEMIC INFORMATION ==========
Enter Course: Computer Science
Enter Semester: 3
Enter CGPA: 8.75


========== STUDENT DETAILS ==========
Name        : Rahul Sharma
Roll Number : 101

---------- ADDRESS DETAILS ----------
City        : Chandigarh
State       : Punjab
PIN Code    : 160001

---------- ACADEMIC DETAILS ----------
Course      : Computer Science
Semester    : 3
CGPA        : 8.75

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
