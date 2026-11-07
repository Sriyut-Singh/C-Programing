
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[200];

    int length;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    printf("=== C Programming: Strings ===\n\n");

    // Taking a string input from the user
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    // Removing the newline character, if present
    text[strcspn(text, "\n")] = '\0';

    // Calculating the string length
    length = strlen(text);

    // Traversing the string character by character
    for (int i = 0; text[i] != '\0'; i++)
    {
        char ch = (char)tolower((unsigned char)text[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (isalpha((unsigned char)text[i]))
        {
            consonants++;
        }
        else if (isdigit((unsigned char)text[i]))
        {
            digits++;
        }
        else if (text[i] == ' ')
        {
            spaces++;
        }
    }

    // Displaying the results
    printf("\n--- String Analysis ---\n");

    printf("Entered String: %s\n", text);
    printf("String Length: %d\n", length);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}
