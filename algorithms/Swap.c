#include <stdio.h>

void swap(int *a, int *b)
{
        int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

        return;
}

int main(void)
{
        int a = 17;
	int b = 0;

	printf("\nBefore:\ta = %d\n\tb = %d\n\n", a, b);
	swap(&a, &b);
	printf("After:\ta = %d\n\tb = %d\n", a, b);

        return (0);
}
