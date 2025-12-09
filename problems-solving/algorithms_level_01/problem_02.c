#include <stdio.h>

int main(int n)
{
        int avg;
	int mrk1 = 60 , mrk2 = 70, mrk3 = 0;

	avg = (mrk1 + mrk2 + mrk3) / 3;
	if (avg >= 50)
		printf("Average is: %d \nPASS\n", avg);
	else
		printf("Average is: %d \nFAIL\n", avg);
}
