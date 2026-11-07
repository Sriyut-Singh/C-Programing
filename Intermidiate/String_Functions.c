
#include <stdio.h>
#include <string.h>

int main()
{
    char first[100] = "Hello";
    char second[100] = "C Programming";
    char copied[100];
    char combined[200];
    char word1[50];
    char word2[50];

    char *position;

    printf("=== C Programming: String Functions ===\n\n");

    // 1. strlen() - Finding string length
    printf("1. String Length\n");
    printf("Length of first string: %zu\n", strlen(first));

    // 2. strcpy() - Copying one string into another
    strcpy(copied, first);

    printf("\n2. String Copy\n");
    printf("Original String: %s\n", first);
    printf("Copied String: %s\n", copied);

    // 3. strcat() - Joining two strings
    strcpy(combined, first);
    strcat(combined, " ");
    strcat(combined, second);

    printf("\n3. String Concatenation\n");
    printf("Combined String: %s\n", combined);

    // 4. strcmp() - Comparing two strings
    printf("\n4. String Comparison\n");

    printf("Enter first word: ");
    scanf("%49s", word1);

    printf("Enter second word: ");
    scanf("%49s", word2);

    if (strcmp(word1, word2) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("The strings are different.\n");
    }

    // 5. strchr() - Searching for a character
    printf("\n5. Character Search\n");

    position = strchr(second, 'P');

    if (position != NULL)
    {
        printf("Character 'P' found in: %s\n", second);
        printf("Remaining string from that position: %s\n",
               position);
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}
