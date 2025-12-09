#include <stdio.h>

int main()
{
	int N;
	int T;
	int fact = 1;
	
	do
	{
		printf("Enter number positive: ");
		scanf("%d", &N);
		if (N < 0)
			printf("error!\n");

	} while (N < 0);


	if (N == 0)
	{
		printf("%d! = %d\n", N, fact);
		return 0;
	}
	
	T = N;	
	while (N > 0)
	{
		fact *= N;
		N--;
	}

	printf("%d! = %d\n", T, fact);

	return 0;
}
