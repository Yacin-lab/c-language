#include <unistd.h>
#include <stdio.h>

int main ()
{
	int Grade;
	char N;

	printf("Enter your grade: ");
	scanf("%d", &Grade);

	if (Grade >= 90)
		N = 'A';
	else if (Grade >= 80)
                N = 'B';
	else if (Grade >= 70)
                N = 'C';
	else if (Grade >= 60)
                N = 'D';
	else if (Grade >= 50)
                N = 'E';
	else
                N = 'F';

	write(1, &N, 1);
	write(1, "\n", 1);

	return 0;
}
