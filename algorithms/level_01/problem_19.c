#include <stdio.h>

int main ()
{
	int n;
	int p;
	int result = 1;

	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter power: ");
        scanf("%d", &p);

	int i = 1;
	while (i <= p)
	{
		result *= n;
		i++;
	}
	printf("%d^%d = %d\n", n, p, result);

	return 0;
}
