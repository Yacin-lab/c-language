#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a == b)
        printf("Numbers are equal\n");
    else
        printf("Numbers are different\n");

    return 0;
}

