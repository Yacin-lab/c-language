#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("Max value: %d\n", max);

    return 0;
}

