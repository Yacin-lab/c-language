#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 3;
    int b = 7;

    printf("Before\na = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After\na = %d, b = %d\n", a, b);

    return (0);
}