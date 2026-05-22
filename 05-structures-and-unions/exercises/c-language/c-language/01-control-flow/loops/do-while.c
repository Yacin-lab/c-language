#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Valid number entered: %d\n", n);

    return 0;
}

