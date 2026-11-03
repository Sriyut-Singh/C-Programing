
/*
===============================================================================
                         ENUMERATIONS (ENUM) IN C
===============================================================================

AIM:
To understand enumerations in C and learn how to declare, initialize and
use enum constants in programs.

INTRODUCTION:
An enumeration (enum) is a user-defined data type in C that consists of
a set of named integer constants.

It makes programs easier to read and understand by replacing numeric
values with meaningful names.

SYNTAX:

    enum enum_name
    {
        constant1,
        constant2,
        constant3
    };

EXAMPLE:

    enum Day
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY
    };

IMPORTANT CONCEPTS:

1. By default, the first enum constant has the value 0.
2. Each following constant increases by 1.
3. Custom integer values can also be assigned.
4. Enum constants can be used in conditional statements and switch-case.
5. Enums improve code readability and maintainability.

===============================================================================
*/

#include <stdio.h>

// ---------------------------------------------------------
// 1. DECLARING AN ENUMERATION
// ---------------------------------------------------------

// By default:
// MONDAY = 0
// TUESDAY = 1
// WEDNESDAY = 2
// THURSDAY = 3
// FRIDAY = 4
// SATURDAY = 5
// SUNDAY = 6

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// ---------------------------------------------------------
// 2. ENUM WITH CUSTOM VALUES
// ---------------------------------------------------------

// Custom integer values can be assigned to enum constants.

enum Status
{
    PENDING = 1,
    APPROVED = 2,
    REJECTED = 3
};

// ---------------------------------------------------------
// 3. DEFINING AN ENUM FOR TRAFFIC LIGHTS
// ---------------------------------------------------------

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    // ---------------------------------------------------------
    // 4. DECLARING AND INITIALIZING ENUM VARIABLES
    // ---------------------------------------------------------

    enum Day today = WEDNESDAY;

    printf("========== ENUMERATIONS IN C ==========\n");

    // Enum constants are represented by integer values.
    printf("\nValue of MONDAY    : %d\n", MONDAY);
    printf("Value of TUESDAY   : %d\n", TUESDAY);
    printf("Value of WEDNESDAY : %d\n", WEDNESDAY);
    printf("Value of SUNDAY    : %d\n", SUNDAY);

    printf("\nToday is represented by enum value: %d\n", today);

    // ---------------------------------------------------------
    // 5. USING ENUM WITH SWITCH-CASE
    // ---------------------------------------------------------

    printf("\n========== DAY IDENTIFICATION ==========\n");

    switch (today)
    {
        case MONDAY:
            printf("Today is Monday.\n");
            break;

        case TUESDAY:
            printf("Today is Tuesday.\n");
            break;

        case WEDNESDAY:
            printf("Today is Wednesday.\n");
            break;

        case THURSDAY:
            printf("Today is Thursday.\n");
            break;

        case FRIDAY:
            printf("Today is Friday.\n");
            break;

        case SATURDAY:
            printf("Today is Saturday.\n");
            break;

        case SUNDAY:
            printf("Today is Sunday.\n");
            break;

        default:
            printf("Invalid day.\n");
    }

    // ---------------------------------------------------------
    // 6. USING ENUM WITH CUSTOM VALUES
    // ---------------------------------------------------------

    enum Status applicationStatus = APPROVED;

    printf("\n========== APPLICATION STATUS ==========\n");

    printf("Pending  = %d\n", PENDING);
    printf("Approved = %d\n", APPROVED);
    printf("Rejected = %d\n", REJECTED);

    switch (applicationStatus)
    {
        case PENDING:
            printf("Application is pending.\n");
            break;

        case APPROVED:
            printf("Application has been approved.\n");
            break;

        case REJECTED:
            printf("Application has been rejected.\n");
            break;

        default:
            printf("Unknown application status.\n");
    }

    // ---------------------------------------------------------
    // 7. PRACTICAL EXAMPLE: TRAFFIC LIGHT SYSTEM
    // ---------------------------------------------------------

    enum TrafficLight signal = GREEN;

    printf("\n========== TRAFFIC LIGHT SYSTEM ==========\n");

    switch (signal)
    {
        case RED:
            printf("RED LIGHT: Stop!\n");
            break;

        case YELLOW:
            printf("YELLOW LIGHT: Get Ready!\n");
            break;

        case GREEN:
            printf("GREEN LIGHT: Go!\n");
            break;

        default:
            printf("Invalid traffic signal.\n");
    }

    return 0;
}


/*
===============================================================================
                            SAMPLE OUTPUT
===============================================================================

========== ENUMERATIONS IN C ==========

Value of MONDAY    : 0
Value of TUESDAY   : 1
Value of WEDNESDAY : 2
Value of SUNDAY    : 6

Today is represented by enum value: 2

========== DAY IDENTIFICATION ==========
Today is Wednesday.

========== APPLICATION STATUS ==========
Pending  = 1
Approved = 2
Rejected = 3
Application has been approved.

========== TRAFFIC LIGHT SYSTEM ==========
GREEN LIGHT: Go!

===============================================================================
                            END OF PROGRAM
===============================================================================
*/
