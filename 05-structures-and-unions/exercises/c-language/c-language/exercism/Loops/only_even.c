#include <stdio.h>

int main () {

	int A, B;

	printf("Enter A: ");
	scanf("%d", &A);
	printf("Enter B: ");
	scanf("%d", &B);

	int i = 0;
	while (A <= B) {
	
		if (A % 2 == 0)
			printf("%d ", A);

		A++;
	}
	printf("\n");

	return 0;
}
