#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("value of x = %d\n", x);
    printf("address of x = %p\n", &x);

    printf("pointer p = %p\n", p);
    printf("value pointed by p = %d\n", *p);

    return 0;
}
