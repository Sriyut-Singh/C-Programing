#include <stdio.h>
#include <string.h>

/*
    ==========================================
              STRUCTURES IN C
    ==========================================

    A structure is a user-defined data type in C
    that allows us to combine variables of
    different data types under a single name.

    For example:
    A student can have:
        - Name       (char array)
        - Roll No.   (int)
        - Marks      (float)
        - Grade      (char)

    Syntax:

    struct StructureName {
        data_type member1;
        data_type member2;
        ...
    };
*/

// 1. DECLARING A STRUCTURE

struct Student {
    char name[50];
    int roll_no;
    float marks;
    char grade;
};

int main() {

    // 2. CREATING A STRUCTURE VARIABLE

    struct Student s1;

    /*
        s1 is a structure variable.
        It contains all the members defined
        inside the Student structure.
    */

    // 3. INITIALIZING STRUCTURE MEMBERS

    strcpy(s1.name, "Sriyut Singh");
    s1.roll_no = 101;
    s1.marks = 89.5;
    s1.grade = 'A';

    /*
        The dot (.) operator is used to access
        individual members of a structure.

        Example:
        s1.roll_no
        s1.marks
        s1.name
    */

    // 4. DISPLAYING STRUCTURE DATA

    printf("========== STUDENT DETAILS ==========\n");

    printf("Name    : %s\n", s1.name);
    printf("Roll No.: %d\n", s1.roll_no);
    printf("Marks   : %.2f\n", s1.marks);
    printf("Grade   : %c\n", s1.grade);


    // 5. ANOTHER WAY TO INITIALIZE A STRUCTURE

    struct Student s2 = {
        "Rahul Sharma",
        102,
        92.5,
        'A'
    };

    printf("\n========== SECOND STUDENT ==========\n");

    printf("Name    : %s\n", s2.name);
    printf("Roll No.: %d\n", s2.roll_no);
    printf("Marks   : %.2f\n", s2.marks);
    printf("Grade   : %c\n", s2.grade);


    // 6. ARRAY OF STRUCTURES

    /*
        An array of structures allows us to store
        information about multiple students.

        Each array element is a complete structure.
    */

    struct Student students[3] = {
        {"Aman", 103, 85.0, 'B'},
        {"Priya", 104, 91.5, 'A'},
        {"Karan", 105, 78.0, 'C'}
    };

    printf("\n========== STUDENT RECORDS ==========\n");

    for (int i = 0; i < 3; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Name    : %s\n", students[i].name);
        printf("Roll No.: %d\n", students[i].roll_no);
        printf("Marks   : %.2f\n", students[i].marks);
        printf("Grade   : %c\n", students[i].grade);
    }


    // 7. POINTER TO STRUCTURE

    /*
        A pointer can store the address of
        a structure variable.

        The arrow (->) operator is used to
        access structure members through a pointer.

        Example:
        ptr->roll_no

        This is equivalent to:
        (*ptr).roll_no
    */

    struct Student *ptr = &s1;

    printf("\n========== USING STRUCTURE POINTER ==========\n");

    printf("Name    : %s\n", ptr->name);
    printf("Roll No.: %d\n", ptr->roll_no);
    printf("Marks   : %.2f\n", ptr->marks);
    printf("Grade   : %c\n", ptr->grade);


    // 8. SIZE OF A STRUCTURE

    /*
        sizeof() returns the memory occupied
        by the complete structure.

        Note:
        The size may be greater than the sum
        of individual member sizes because
        of memory padding and alignment.
    */

    printf("\nSize of Student structure: %zu bytes\n",
           sizeof(struct Student));


    // 9. MODIFYING STRUCTURE MEMBERS

    /*
        Structure members can be modified
        directly using the dot operator.
    */

    s1.marks = 95.0;
    s1.grade = 'A';

    printf("\n========== UPDATED STUDENT DETAILS ==========\n");

    printf("Name  : %s\n", s1.name);
    printf("Marks : %.2f\n", s1.marks);
    printf("Grade : %c\n", s1.grade);


    return 0;
}

/*
    ==========================================
                IMPORTANT POINTS
    ==========================================

    1. A structure is declared using the
       'struct' keyword.

    2. Structures can contain members of
       different data types.

    3. The dot (.) operator accesses members
       using a structure variable.

    4. The arrow (->) operator accesses members
       using a pointer to a structure.

    5. Multiple structure variables can be
       created from the same structure definition.

    6. Arrays of structures can store multiple
       records.

    7. Structures can also contain other
       structures (nested structures).

    8. Structure memory may contain padding
       bytes due to alignment requirements.
*/
