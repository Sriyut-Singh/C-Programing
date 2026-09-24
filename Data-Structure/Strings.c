#include <stdio.h>
#include <string.h> // Required for string functions like strlen()

int main() {
    // 1. Declaration and Initialization
    char greeting[] = "Hello"; // Compiler automatically appends '\0' at the end
    char name[50];             // Creates a character array that can hold up to 49 characters + '\0'

    // 2. Output a pre-defined string
    // %s is the format specifier used for strings
    printf("%s, World!\n", greeting); 

    // 3. Taking String Input from the User
    printf("Enter your full name: ");
    
    // fgets() is the safest way to read an entire line of text, including spaces
    fgets(name, sizeof(name), stdin); 

    // 4. Output the user's string
    // puts() automatically prints the string followed by a new line
    printf("Welcome, ");
    puts(name); 

    // 5. Bonus: Finding the length of the string
    // strlen() counts characters up to (but excluding) the null terminator
    printf("Length of the greeting string: %lu\n", strlen(greeting));

    return 0;
}
