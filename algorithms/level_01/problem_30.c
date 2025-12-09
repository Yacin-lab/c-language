#include <stdio.h>

int main ()
{
        float days, hours, minutes, seconds, totalsc;
        
        totalsc = 0;

        printf("Enter number of days: ");
        scanf("%f", &days);
	printf("Enter number of hours: ");
        scanf(" %f", &hours);
	printf("Enter number of minutes: ");
        scanf(" %f", &minutes);
	printf("Enter number of seconds: ");
        scanf(" %f", &seconds);

        totalsc = days * (24*60*60);
        totalsc += hours * (60*60);
	totalsc += minutes * 60;
	totalsc += seconds;

        printf("%.2f Seconds\n", totalsc);

        return 0;
}
