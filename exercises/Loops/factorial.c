#include <stdio.h>

int main () {
	
	int i, num;
	double factorial = 1;

        printf("Enter a number: ");
        scanf("%d", &num);

	if (num < 0) {
	
		printf("Factorial is not defined for negative numbers.\n");
		return 0;
	}

        i = 1;
        while (i <= num) {
		
		factorial *= i;
                i++;
        }

        printf("%d! = %.2f\n", num, factorial);

	return 0;	
}
