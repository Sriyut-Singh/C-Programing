
/*
===============================================================================
                  FUNCTION ARGUMENTS AND PARAMETERS IN C
===============================================================================

AIM:
To understand function arguments and parameters in C and learn how values
are passed to functions during function calls.

INTRODUCTION:
Arguments and parameters are used to exchange information between a calling
function and the function being called.

There are two important terms:

1. ACTUAL ARGUMENTS:
   These are the values or variables passed to a function during a function
   call.

2. FORMAL PARAMETERS:
   These are the variables declared in the function definition that receive
   the values passed by the calling function.

EXAMPLE:

    int add(int a, int b)
    {
        return a + b;
    }

    int result = add(10, 20);

Here:
    10 and 20 are actual arguments.
    a and b are formal parameters.

IMPORTANT CONCEPTS:

1. A function can accept one or multiple arguments.
2. Arguments and parameters should have compatible data types.
3. The order of arguments matters.
4. A function can return a calculated result.
5. Values passed to ordinary parameters are copied in C.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. FUNCTION DECLARATIONS
// ---------------------------------------------------------

int add(int a, int b);

int subtract(int a, int b);

float calculateArea(float length, float breadth);

void displayStudent(char name[], int rollNumber, float marks);

int findMaximum(int a, int b, int c);


// ---------------------------------------------------------
// 2. MAIN FUNCTION
// ---------------------------------------------------------

int main()
{
    printf("========== FUNCTION ARGUMENTS IN C ==========\n");

    // ---------------------------------------------------------
    // EXAMPLE 1: PASSING TWO INTEGER ARGUMENTS
    // ---------------------------------------------------------

    // Here, 10 and 20 are actual arguments.
    // The function receives them through formal parameters a and b.

    int sum = add(10, 20);

    printf("\n1. ADDITION OF TWO NUMBERS\n");

    printf("Sum = %d\n", sum);


    // ---------------------------------------------------------
    // EXAMPLE 2: PASSING DIFFERENT VALUES TO A FUNCTION
    // ---------------------------------------------------------

    int difference = subtract(50, 15);

    printf("\n2. SUBTRACTION OF TWO NUMBERS\n");

    printf("Difference = %d\n", difference);


    // ---------------------------------------------------------
    // EXAMPLE 3: PASSING FLOAT ARGUMENTS
    // ---------------------------------------------------------

    // Passing decimal values to calculateArea().

    float area = calculateArea(10.5f, 5.0f);

    printf("\n3. AREA CALCULATION\n");

    printf("Area of Rectangle = %.2f\n", area);


    // ---------------------------------------------------------
    // EXAMPLE 4: PASSING DIFFERENT DATA TYPES
    // ---------------------------------------------------------

    // A string, integer and float are passed to one function.

    printf("\n4. STUDENT INFORMATION\n");

    displayStudent("Rahul Sharma", 101, 92.5f);


    // ---------------------------------------------------------
    // EXAMPLE 5: PASSING THREE ARGUMENTS
    // ---------------------------------------------------------

    int maximum = findMaximum(25, 80, 45);

    printf("\n5. FINDING THE LARGEST NUMBER\n");

    printf("Largest Number = %d\n", maximum);


    // ---------------------------------------------------------
    // EXAMPLE 6: USING VARIABLES AS ACTUAL ARGUMENTS
    // ---------------------------------------------------------

    int x = 100;
    int y = 200;

    // Variables can also be passed as actual arguments.

    int result = add(x, y);

    printf("\n6. PASSING VARIABLES AS ARGUMENTS\n");

    printf("First Number  = %d\n", x);
    printf("Second Number = %d\n", y);
    printf("Sum           = %d\n", result);

    return 0;
}


// ---------------------------------------------------------
// 3. FUNCTION DEFINITIONS
// ---------------------------------------------------------


// FUNCTION 1: ADDITION

int add(int a, int b)
{
    // a and b are formal parameters.
    return a + b;
}


// FUNCTION 2: SUBTRACTION

int subtract(int a, int b)
{
    return a - b;
}


// FUNCTION 3: AREA OF A RECTANGLE

float calculateArea(float length, float breadth)
{
    // Formula: Area = Length * Breadth
    return length * breadth;
}


// FUNCTION 4: DISPLAY STUDENT INFORMATION

void displayStudent(char name[], int rollNumber, float marks)
{
    printf("Name        : %s\n", name);
    printf("Roll Number : %d\n", rollNumber);
    printf("Marks       : %.2f\n", marks);
}


// FUNCTION 5: FINDING THE MAXIMUM OF THREE NUMBERS

int findMaximum(int a, int b, int c)
{
    int maximum = a;

    if (b > maximum)
    {
        maximum = b;
    }

    if (c > maximum)
    {
        maximum = c;
    }

    return maximum;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== FUNCTION ARGUMENTS IN C ==========

1. ADDITION OF TWO NUMBERS
Sum = 30

2. SUBTRACTION OF TWO NUMBERS
Difference = 35

3. AREA CALCULATION
Area of Rectangle = 52.50

4. STUDENT INFORMATION
Name        : Rahul Sharma
Roll Number : 101
Marks       : 92.50

5. FINDING THE LARGEST NUMBER
Largest Number = 80

6. PASSING VARIABLES AS ARGUMENTS
First Number  = 100
Second Number = 200
Sum           = 300

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
