
# Functions in C

This folder contains my learning and practice programs related to **Functions in C Programming**.

Functions are one of the fundamental concepts of C. They help divide a large program into smaller, reusable and manageable blocks of code.

Through these programs, I am learning how to declare, define and call functions, pass arguments, return values, use recursion and work with function pointers.

---

## Topics Covered

| No. | File Name | Description |
|---|---|---|
| 1 | `function_basics.c` | Introduction to functions, function declaration, definition and calling. |
| 2 | `function_arguments.c` | Understanding actual and formal arguments and passing multiple arguments. |
| 3 | `call_by_value.c` | Passing copies of variables to functions and understanding call by value. |
| 4 | `call_by_reference.c` | Using pointers to modify original variables through functions. |
| 5 | `recursion.c` | Understanding recursion, base conditions and recursive calls. |
| 6 | `factorial_recursion.c` | Calculating the factorial of a number using recursion. |
| 7 | `fibonacci_recursion.c` | Generating the Fibonacci series using recursion. |
| 8 | `function_pointers.c` | Understanding function pointers and calling functions through pointers. |

---

## Concepts Learned

- Function declaration, definition and function calls.
- Function prototypes and return types.
- Actual and formal arguments.
- Passing arguments to functions.
- Call by value.
- Pointer-based reference-like behaviour.
- Recursive functions and base conditions.
- Factorial and Fibonacci using recursion.
- Function pointers and callback functions.
- Code reusability and modular programming.

---

## Basic Syntax of a Function

```c
return_type function_name(parameters)
{
    // Statements

    return value;
}
```

### Example

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}
```

**Output:**
```text
Sum = 30
```

---

## How to Compile and Run

You can compile these programs using GCC.

**Compile:**

```bash
gcc filename.c -o output
```

**Run on Linux:**

```bash
./output
```

**Run on Windows:**

```bash
output.exe
```

Replace `filename.c` with the name of the C file you want to execute.

---

## Learning Objective

The objective of this folder is to build a strong understanding of functions in C, improve problem-solving skills and learn how to write modular, reusable and efficient programs.

---

**Part of my C Programming Learning Journey.**

[Back to Main Repository](../README.md)
