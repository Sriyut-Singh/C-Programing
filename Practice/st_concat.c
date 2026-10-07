//Create a program to Implement manual concatenation of two strings.

#include <stdio.h>

int main() {
    // Declare two character arrays (strings) with a capacity of 100 characters each
    char str1;
    char str2;
    
    // i tracks the index of str1, j tracks the index of str2
    int i = 0, j = 0;

    // Prompt for and read the first string safely from standard input
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Prompt for and read the second string safely from standard input
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    /* 
     * Step 1: Find the end of the first string.
     * This loop increments 'i' until it points to the null terminator ('\0') 
     * of str1. This is where the second string will begin appending.
     */
    while (str1[i] != '\0') {
        i++;
    }

    /* 
     * Step 2: Concatenate the second string to the first string.
     * Copy each character from str2[j] into str1[i] one by one, 
     * moving both index counters forward.
     */
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    /* 
     * Step 3: Manually add the null terminator at the final position.
     * C strings must end with '\0' so printf knows where the string stops.
     */
    str1[i] = '\0'; 

    // Print the final combined result
    printf("Concatenated string: %s\n", str1);

    return 0;
}
