
/*
===============================================================================
              STRING HANDLING AND STRING FUNCTIONS IN C
===============================================================================

AIM:
To understand strings in C and perform different string operations using
standard library functions.

INTRODUCTION:
A string is a sequence of characters terminated by a special null character
('\0').

In C, strings are stored using character arrays.

HEADER FILE:
    #include <string.h>

IMPORTANT STRING FUNCTIONS:

1. strlen()  - Returns the length of a string.
2. strcpy()  - Copies one string into another.
3. strcat()  - Joins two strings.
4. strcmp()  - Compares two strings.
5. Reverse   - Reverses a string using a loop.

SYNTAX:

    strlen(string);
    strcpy(destination, source);
    strcat(destination, source);
    strcmp(string1, string2);

NOTE:
The standard C library does not provide strrev(). Therefore, we implement
string reversal manually in this program.

===============================================================================
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // ---------------------------------------------------------
    // 1. STRING DECLARATION AND INITIALIZATION
    // ---------------------------------------------------------

    char str1[100] = "Hello";
    char str2[100] = "World";
    char copy[100];

    printf("STRING HANDLING IN C\n");
    printf("--------------------\n");

    printf("First String  : %s\n", str1);
    printf("Second String : %s\n", str2);


    // ---------------------------------------------------------
    // 2. FINDING THE LENGTH OF A STRING USING strlen()
    // ---------------------------------------------------------

    // strlen() returns the number of characters in a string.
    // It does not count the terminating null character '\0'.

    printf("\n1. STRING LENGTH\n");

    printf("Length of str1 = %zu\n", strlen(str1));
    printf("Length of str2 = %zu\n", strlen(str2));


    // ---------------------------------------------------------
    // 3. COPYING A STRING USING strcpy()
    // ---------------------------------------------------------

    // strcpy() copies the source string into the destination.
    // The destination array must have enough space.

    printf("\n2. STRING COPYING\n");

    strcpy(copy, str1);

    printf("Original String : %s\n", str1);
    printf("Copied String   : %s\n", copy);


    // ---------------------------------------------------------
    // 4. CONCATENATING STRINGS USING strcat()
    // ---------------------------------------------------------

    // strcat() appends the second string to the first string.
    // The destination array must have enough free space.

    printf("\n3. STRING CONCATENATION\n");

    char combined[100] = "Hello ";

    strcat(combined, str2);

    printf("After concatenation: %s\n", combined);


    // ---------------------------------------------------------
    // 5. COMPARING STRINGS USING strcmp()
    // ---------------------------------------------------------

    // strcmp() compares two strings character by character.
    //
    // Return value:
    // 0  -> Both strings are equal.
    // <0 -> First string is lexicographically smaller.
    // >0 -> First string is lexicographically greater.

    printf("\n4. STRING COMPARISON\n");

    char word1[] = "Apple";
    char word2[] = "Apple";
    char word3[] = "Banana";

    if (strcmp(word1, word2) == 0)
    {
        printf("%s and %s are equal.\n", word1, word2);
    }
    else
    {
        printf("%s and %s are not equal.\n", word1, word2);
    }

    if (strcmp(word1, word3) != 0)
    {
        printf("%s and %s are different.\n", word1, word3);
    }


    // ---------------------------------------------------------
    // 6. REVERSING A STRING USING A LOOP
    // ---------------------------------------------------------

    // C does not have a standard strrev() function.
    // We can reverse a string by swapping characters from both ends.

    printf("\n5. STRING REVERSAL\n");

    char reverseStr[] = "Programming";

    int length = strlen(reverseStr);

    // Swap characters from the beginning and the end
    for (int i = 0; i < length / 2; i++)
    {
        char temp = reverseStr[i];

        reverseStr[i] = reverseStr[length - 1 - i];

        reverseStr[length - 1 - i] = temp;
    }

    printf("Reversed String: %s\n", reverseStr);


    // ---------------------------------------------------------
    // 7. CONVERTING LOWERCASE TO UPPERCASE
    // ---------------------------------------------------------

    // toupper() converts a lowercase character to uppercase.
    // It is declared in the ctype.h header file.

    printf("\n6. LOWERCASE TO UPPERCASE\n");

    char text[] = "hello world";

    printf("Original String: %s\n", text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        // Convert each character to uppercase
        // The unsigned char conversion makes the call safe
        text[i] = (char)toupper((unsigned char)text[i]);
    }

    printf("Uppercase String: %s\n", text);


    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

STRING HANDLING IN C
--------------------
First String  : Hello
Second String : World

1. STRING LENGTH
Length of str1 = 5
Length of str2 = 5

2. STRING COPYING
Original String : Hello
Copied String   : Hello

3. STRING CONCATENATION
After concatenation: Hello World

4. STRING COMPARISON
Apple and Apple are equal.
Apple and Banana are different.

5. STRING REVERSAL
Reversed String: gnimmargorP

6. LOWERCASE TO UPPERCASE
Original String: hello world
Uppercase String: HELLO WORLD

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
