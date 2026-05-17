#include <stdio.h>

int main () {

        int N;
        int i;

        printf("Enter an integer: ");
        scanf("%d", &N);

	if (N < 0)
		N = -N;

	i = 0;
        while (N > 9) {
	
		N /= 10;
		i++;
	}
	i += 1;		// for last number

        printf("Digits = %d\n", i);
        return 0;
}
