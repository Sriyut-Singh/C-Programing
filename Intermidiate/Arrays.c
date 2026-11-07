
#include <stdio.h>

int main()
{
    int marks[5];
    int sum = 0;
    int highest, lowest;

    printf("=== C Programming: Arrays ===\n\n");

    // Taking input from the user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize highest and lowest marks
    highest = marks[0];
    lowest = marks[0];

    // Calculate sum, highest and lowest marks
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];

        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    // Display all array elements
    printf("\n--- Your Marks ---\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    // Display results
    printf("\nTotal Marks: %d", sum);
    printf("\nAverage Marks: %.2f", sum / 5.0);
    printf("\nHighest Marks: %d", highest);
    printf("\nLowest Marks: %d\n", lowest);

    return 0;
}
