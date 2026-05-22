#include <stdio.h>

int main () {

	int N;
	int i;
	int sum = 0;

	printf("Enter a number: ");
	scanf("%d", &N);

	i = 1;
	while (i <= N)
		sum += i++;

	printf("Sum = %d\n", sum);
	return 0;
}
