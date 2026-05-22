#include <stdio.h>

int square(int n)
{
    return (n * n);
}

int main(void)
{
    int value;

    value = square(5);
    printf("Square: %d\n", value);

    return (0);
}
