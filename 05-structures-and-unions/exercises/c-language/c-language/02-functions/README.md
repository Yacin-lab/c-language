# Functions 

This section covers the basics of **functions in C**.

## What is a Function?
A function is a block of code that:
- Does one specific task
- Can be reused
- Makes code cleaner and organized

## Function Prototype
Declares the function before using it.

Example:
int add(int a, int b);

## Function Definition
The real implementation of the function.

Example:

    int add(int a, int b) {
        return a + b;
    }

## Arguments and Return
- Arguments: values passed to the function
- Return: value sent back by the function

Example:

    int result = add(2, 3);

## Scope
- Local variables exist only inside the function
- Global variables exist everywhere (use carefully)

## Recursion
A function that calls itself.

Example:

    int factorial(int n) {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }

## Why Functions Matter
- Avoid code repetition
- Improve readability
- Easier debugging

## Key Rule
Functions work with **copies of values** (pass by value) unless pointers are used.
