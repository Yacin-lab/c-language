#include <stdio.h>

int main () {

        int N;

        printf("Enter an integer: ");
        scanf("%d", &N);

	printf("Reversed: ");

        if (N < 0) {
		printf("-");
                N = -N;
	}

        while (N > 0) {

		printf("%d", N % 10);
		N /= 10;
        }

	printf("\n");

        return 0;
}
