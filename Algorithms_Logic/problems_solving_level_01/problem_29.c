#include <stdio.h>

int main ()
{
    float numHours, numDays, numWeeks;
	int day, week;
	day = 24;
	week = 7;

        printf("Enter number of hours: ");
        scanf("%f", &numHours);

    numDays = numHours / day;
	numWeeks = numDays / week;

        printf("%.2f Weeks\n%.2f Days\n", numWeeks, numDays);

        return 0;
}
