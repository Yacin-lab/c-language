#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}

