
#include <stdio.h>
#include <string.h>

// Defining a union
union Data
{
    int number;
    float decimal;
    char text[50];
};

// Defining a structure for comparison
struct Student
{
    int rollNumber;
    float cgpa;
    char grade;
};

int main()
{
    union Data value;
    struct Student student;

    printf("=== C Programming: Unions ===\n\n");

    // 1. Storing an integer
    printf("1. Storing an Integer\n");

    value.number = 100;

    printf("Integer Value: %d\n", value.number);

    // 2. Storing a floating-point value
    printf("\n2. Storing a Float\n");

    value.decimal = 85.5f;

    printf("Float Value: %.2f\n", value.decimal);

    // 3. Storing a string
    printf("\n3. Storing a String\n");

    strcpy(value.text, "Hello Union");

    printf("String Value: %s\n", value.text);

    // 4. Displaying union memory information
    printf("\n4. Union Memory Information\n");

    printf("Size of integer: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of text array: %zu bytes\n", sizeof(value.text));
    printf("Size of union: %zu bytes\n", sizeof(value));

    // 5. Structure and union comparison
    printf("\n5. Structure and Union Comparison\n");

    student.rollNumber = 101;
    student.cgpa = 8.5f;
    student.grade = 'A';

    printf("Student Roll Number: %d\n", student.rollNumber);
    printf("Student CGPA: %.2f\n", student.cgpa);
    printf("Student Grade: %c\n", student.grade);

    printf("\nSize of structure: %zu bytes\n", sizeof(student));

    return 0;
}
