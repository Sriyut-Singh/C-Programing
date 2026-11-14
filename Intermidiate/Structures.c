
#include <stdio.h>
#include <string.h>

// Defining a structure
struct Student
{
    char name[50];
    int rollNumber;
    int age;
    float cgpa;
};

// Function to display student details
void displayStudent(struct Student student)
{
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Age: %d\n", student.age);
    printf("CGPA: %.2f\n", student.cgpa);
}

int main()
{
    struct Student student1;
    struct Student student2;

    printf("=== C Programming: Structures ===\n\n");

    // Taking input for the first student
    printf("Enter details of Student 1\n");

    printf("Enter name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter age: ");
    scanf("%d", &student1.age);

    printf("Enter CGPA: ");
    scanf("%f", &student1.cgpa);

    // Taking input for the second student
    printf("\nEnter details of Student 2\n");

    printf("Enter name: ");
    scanf(" %49[^\n]", student2.name);

    printf("Enter roll number: ");
    scanf("%d", &student2.rollNumber);

    printf("Enter age: ");
    scanf("%d", &student2.age);

    printf("Enter CGPA: ");
    scanf("%f", &student2.cgpa);

    // Displaying student records
    printf("\n=== Student Records ===\n");

    displayStudent(student1);
    displayStudent(student2);

    // Comparing student CGPAs
    printf("\n=== Academic Comparison ===\n");

    if (student1.cgpa > student2.cgpa)
    {
        printf("%s has a higher CGPA.\n", student1.name);
    }
    else if (student2.cgpa > student1.cgpa)
    {
        printf("%s has a higher CGPA.\n", student2.name);
    }
    else
    {
        printf("Both students have the same CGPA.\n");
    }

    return 0;
}
