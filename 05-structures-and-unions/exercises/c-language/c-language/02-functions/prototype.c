#include <stdio.h>

// Function Prototype
int add(int a, int b);

// Function Definition
int add(int a, int b)
{
    return (a + b);
}

int main(void)
{
    int result;

    result = add(3, 4);
    printf("Result: %d\n", result);

    return (0);
}
