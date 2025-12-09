#include <stdio.h>
#include <unistd.h>

int main ()
{
	double sales, percent, comission;

	printf("Enter Total Sales: ");
	scanf("%lf", &sales);

	if (sales >= 1000000)
		percent = 0.01;
	else if (sales >= 500000)
                percent = 0.02;
        else if (sales >= 100000)
                percent = 0.03;
	else if (sales >= 50000)
                percent = 0.05;
	else
		percent = 0;
	
	comission = percent * sales;
	printf("comission = %.2f\n", comission);
	printf("\npercent is: %.0f%%\n", percent*100);

	return 0;
}
