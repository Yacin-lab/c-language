#include <stdio.h>

void ft_set_zero(int *n)
{
    *n = 0;
}

int main(void)
{
    int n = 42;

    printf("Before\nn = %d\n", n);
    ft_set_zero(&n);
    printf("After\nn = %d\n", n);

    return (0);
}