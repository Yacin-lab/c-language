#include <stdio.h>

int g = 10;      // global variable. (Known in the full program)

void print_values(void)
{
    int g = 5;      // local variable
    printf("Local g: %d\n", g);
}

int main(void)
{
    print_values();
    printf("Global g: %d\n", g);

    return (0);
}
