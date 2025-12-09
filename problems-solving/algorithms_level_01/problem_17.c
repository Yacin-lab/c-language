#include <stdio.h>

int main()
{
	int i;
	int N = 10;
	int sumEven = 0;

	i = 0;
	while (i <= N)
	{
		if (i % 2 == 0)
		{
			sumEven += i;
			printf("Even = %d\n", sumEven); // check
		}
		i++;
	}

	printf("sum Even from 1 to %d = %d\n", N, sumEven);
	return 0;
}
