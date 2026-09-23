#include <stdio.h>
#include <string.h> // string functions ke liye, jaise strcpy

// ==========================================================
// 1. STRUCTURE DEFINITION (Template/Naya Data Type Banana)
// ==========================================================
// Hum ek 'Student' naam ka naya data type bana rahe hain.
// Iske andar alag-alag type ka data ek sath store ho sakta hai.
struct Student {
    int roll_no;         // Integer data
    char name[50];       // String (Character Array) data
    float marks;         // Float data
};

int main() {
    // ==========================================================
    // 2. CREATING A STRUCTURE VARIABLE (Variable Banana)
    // ==========================================================
    // Jaise 'int x' likhte hain, waise hi 'struct Student s1' likhenge.
    struct Student s1;

    // ==========================================================
    // 3. ASSIGNING VALUES (Values Daalna)
    // ==========================================================
    // Structure ke andar ke items ko access karne ke liye '.' (Dot) operator use hota hai.
    
    s1.roll_no = 101; // Roll number assign kiya
    
    // Normal string assignment (s1.name = "Rahul") C me allow nahi hai.
    // Isliye hum 'strcpy' (string copy) function ka use karte hain.
    strcpy(s1.name, "Rahul Kumar"); 
    
    s1.marks = 88.5; // Marks assign kiye

    // ==========================================================
    // 4. DISPLAYING VALUES (Values Print Karna)
    // ==========================================================
    printf("--- Student Details ---\n");
    printf("Roll Number : %d\n", s1.roll_no);
    printf("Student Name: %s\n", s1.name);
    printf("Marks       : %.2f\n", s1.marks);

    return 0;
}
