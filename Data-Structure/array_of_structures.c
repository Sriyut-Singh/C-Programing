
/*
===============================================================================
                    ARRAY OF STRUCTURES IN C
===============================================================================

AIM:
To understand how arrays of structures are used to store and manage multiple
records of the same structure type.

INTRODUCTION:
A structure is a user-defined data type in C that allows us to combine
different types of data under a single name.

An array of structures is a collection of structure variables stored
under one array name.

It is useful when we need to maintain records of multiple students,
employees, products, or other entities.

SYNTAX:

    struct StructureName
    {
        data_type member1;
        data_type member2;
    };

    struct StructureName array_name[size];

EXAMPLE:

    struct Student students[5];

This creates an array capable of storing information about 5 students.

IMPORTANT CONCEPTS:
1. Structure declaration.
2. Array of structure variables.
3. Accessing members using the dot (.) operator.
4. Taking input and displaying structure data.
5. Performing calculations using structure members.

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

int main()
{
    // ---------------------------------------------------------
    // 2. DECLARING AN ARRAY OF STRUCTURES
    // ---------------------------------------------------------

    // An array capable of storing information of 5 students
    struct Student students[5];

    int i;
    float totalMarks = 0;

    // ---------------------------------------------------------
    // 3. TAKING STUDENT DETAILS AS INPUT
    // ---------------------------------------------------------

    printf("===== STUDENT RECORD MANAGEMENT =====\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        // Add marks to calculate the total later
        totalMarks += students[i].marks;
    }

    // ---------------------------------------------------------
    // 4. DISPLAYING ALL STUDENT RECORDS
    // ---------------------------------------------------------

    printf("\n\n========== STUDENT RECORDS ==========\n");

    printf("\n%-20s %-15s %-10s\n",
           "Name", "Roll Number", "Marks");

    printf("------------------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        // Accessing structure members using the dot operator
        printf("%-20s %-15d %-10.2f\n",
               students[i].name,
               students[i].rollNumber,
               students[i].marks);
    }

    // ---------------------------------------------------------
    // 5. CALCULATING AVERAGE MARKS
    // ---------------------------------------------------------

    // Average = Total Marks / Number of Students

    float average = totalMarks / 5;

    printf("\nTotal Marks = %.2f\n", totalMarks);
    printf("Average Marks = %.2f\n", average);

    // ---------------------------------------------------------
    // 6. FINDING THE STUDENT WITH HIGHEST MARKS
    // ---------------------------------------------------------

    int highestIndex = 0;

    // Assume the first student has the highest marks initially
    for (i = 1; i < 5; i++)
    {
        if (students[i].marks > students[highestIndex].marks)
        {
            highestIndex = i;
        }
    }

    printf("\n========== TOPPER DETAILS ==========\n");

    printf("Name        : %s\n", students[highestIndex].name);
    printf("Roll Number : %d\n", students[highestIndex].rollNumber);
    printf("Marks       : %.2f\n", students[highestIndex].marks);

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

===== STUDENT RECORD MANAGEMENT =====

Enter details of Student 1:
Enter Name: Rahul
Enter Roll Number: 101
Enter Marks: 85

Enter details of Student 2:
Enter Name: Aman
Enter Roll Number: 102
Enter Marks: 92

Enter details of Student 3:
Enter Name: Priya
Enter Roll Number: 103
Enter Marks: 78

Enter details of Student 4:
Enter Name: Karan
Enter Roll Number: 104
Enter Marks: 88

Enter details of Student 5:
Enter Name: Neha
Enter Roll Number: 105
Enter Marks: 95


========== STUDENT RECORDS ==========

Name                 Roll Number     Marks
------------------------------------------------
Rahul                101             85.00
Aman                 102             92.00
Priya                103             78.00
Karan                104             88.00
Neha                 105             95.00

Total Marks = 438.00
Average Marks = 87.60

========== TOPPER DETAILS ==========
Name        : Neha
Roll Number : 105
Marks       : 95.00

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
