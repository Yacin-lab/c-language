#include <unistd.h>
#include <stdio.h>

int main () {

	int N;
	int result = 0;
	
	do {
		write(1, "Enter the number: ", 18);
		scanf("%d", &N);
		if (N != -99)
			result += N;
	} while (N != -99);

	printf("result = %d\n", result);

	return 0;
}
