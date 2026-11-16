
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[50];
    char line[100];
    int rollNumber;
    float cgpa;

    printf("=== C Programming: File Handling ===\n\n");

    // Taking student details
    printf("Enter student name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
    {
        printf("Unable to read name.\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0';

    printf("Enter roll number: ");
    if (scanf("%d", &rollNumber) != 1)
    {
        printf("Invalid roll number.\n");
        return 1;
    }

    printf("Enter CGPA: ");
    if (scanf("%f", &cgpa) != 1)
    {
        printf("Invalid CGPA.\n");
        return 1;
    }

    // 1. Creating and writing to a file
    printf("\n1. Writing Data to File\n");

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }

    fprintf(file, "Student Name: %s\n", name);
    fprintf(file, "Roll Number: %d\n", rollNumber);
    fprintf(file, "CGPA: %.2f\n", cgpa);

    fclose(file);

    printf("Student details saved successfully.\n");

    // 2. Reading data from a file
    printf("\n2. Reading Data from File\n");

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    // 3. Appending additional information
    printf("\n\n3. Appending Data to File\n");

    file = fopen("student.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Record Status: Completed\n");

    fclose(file);

    printf("Additional information appended successfully.\n");

    // 4. Reading the updated file
    printf("\n4. Reading Updated File\n");

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to reopen file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    printf("\nFile closed successfully.\n");

    return 0;
}
