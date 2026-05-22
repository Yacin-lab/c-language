#include <stdio.h>

int main () {

        int N, multi;
        int i;

        printf("Enter a number: ");
        scanf("%d", &N);

        i = 1;
        while (i <= 10) {

                multi = N * i;
		printf("%2d x %2d = %2d\n", N, i,  multi);

                i++;
        }

        return 0;
}
