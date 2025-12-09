#include <stdio.h>

/*int main ()
{
	int n;
	int result;

	printf("Enter a number: ");
	scanf("%d", &n);

	result = n * n;
	printf("%d^2 = %d\n", n, result);

	result = n * n * n;
	printf("%d^3 = %d\n", n, result);

	result = n * n * n * n;
	printf("%d^4 = %d\n", n, result);

	return 0;
}*/ 

//update code
int main () {

	int i, n, result;

	printf("Enter a number: ");
        scanf("%d", &n);

	result = n;
	i = 2;
	while (i <= 4) {
		result *= n;
		printf("%d power(%d) = %d\n", n, i, result);
		i++;
	}


	return 0;
}
