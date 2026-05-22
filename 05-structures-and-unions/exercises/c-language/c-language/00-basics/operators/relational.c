#include <stdio.h>

int main(void)
{
    int x = 5, y = 8;

    printf("%d > %d = %d\n", x, y, x > y);
    printf("%d < %d = %d\n", x, y, x < y);
    printf("%d == %d = %d\n", x, y, x == y);
    printf("%d != %d = %d\n", x, y, x != y);

    return 0;
}
