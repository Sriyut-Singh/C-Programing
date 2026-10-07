//Write a program to compute the length of a string without using library functions.

#include <stdio.h>

int main() {
    // Declare a character array (string) with a capacity of 100 characters
    char str[100]; 
    
    // Initialize a counter variable to store the length of the string
    int length = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");

    /* 
     * fgets() is used to read input safely from the standard input (stdin).
     * It reads characters until a newline (\n) or EOF is reached, or up to 99 characters.
     * It automatically appends the null terminator ('\0') at the end.
     */
    fgets(str, sizeof(str), stdin);

    /*
     * Loop through the character array one by one.
     * The loop continues until it encounters the null terminator ('\0'), 
     * which marks the end of a string in C.
     */
    while (str[length] != '\0') {
        length++; // Increment the counter for each valid character
    }

    /*
     * Print the final calculated length.
     * Note: fgets() includes the newline character (\n) from pressing Enter,
     * so the printed length will include that character if it fits in the buffer.
     */
    printf("Length of the string: %d\n", length);

    // Return 0 to indicate successful program execution
    return 0;
}
