
/*
    File Name: Switch_Case.c
    Topic: Switch-Case Statement in C

    AIM:
    To understand and demonstrate the switch-case
    statement using a simple calculator.

    INTRODUCTION:
    The switch statement is a decision-making
    statement used to execute one block of code
    from multiple possible choices.

    IMPORTANT KEYWORDS:

    switch   - Evaluates the given expression.
    case     - Defines a possible matching value.
    break    - Exits the switch statement.
    default  - Executes when no case matches.

    PROGRAM:
*/

#include <stdio.h>

int main(void)
{
    double num1, num2;
    char operator;

    printf("SIMPLE CALCULATOR USING SWITCH-CASE\n");
    printf("-----------------------------------\n");

    // Taking input from the user
    printf("Enter first number: ");

    if (scanf("%lf", &num1) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");

    if (scanf(" %c", &operator) != 1)
    {
        printf("Invalid operator input!\n");
        return 1;
    }

    printf("Enter second number: ");

    if (scanf("%lf", &num2) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    // Performing operations using switch-case
    switch (operator)
    {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("Result: %.2lf\n", num1 / num2);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, * or /.\n");
    }

    return 0;
}

/*
    SAMPLE OUTPUT 1:

    SIMPLE CALCULATOR USING SWITCH-CASE
    -----------------------------------
    Enter first number: 20
    Enter an operator (+, -, *, /): +
    Enter second number: 10
    Result: 30.00


    SAMPLE OUTPUT 2:

    Enter first number: 15
    Enter an operator (+, -, *, /): /
    Enter second number: 3
    Result: 5.00


    SAMPLE OUTPUT 3:

    Enter first number: 10
    Enter an operator (+, -, *, /): /
    Enter second number: 0
    Error: Division by zero is not allowed.


    EXPLANATION:

    1. SWITCH:
       Evaluates the value of the operator variable.

    2. CASE:
       Executes the matching operation.

    3. BREAK:
       Terminates the switch statement after
       the matching case is executed.

    4. DEFAULT:
       Executes when none of the cases match.

    IMPORTANT:
    The switch expression must have an integer
    type, including char or enum. It cannot directly
    use floating-point values or strings.

    CONCLUSION:
    The switch-case statement is useful when a
    program needs to select one option from
    multiple possible choices.
*/
