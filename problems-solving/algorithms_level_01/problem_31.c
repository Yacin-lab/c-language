#include <stdio.h>

int main ()
{
	int days, hours, minutes, seconds;
	int day = 24*60*60;
	int hour = 60*60;
	int minute = 60;

	printf("Enter the number of seconds: ");
	scanf("%d", &seconds);

	days = seconds / day;
	seconds %= day;
	hours = seconds / hour;
	seconds %= hour;
	minutes = seconds / minute;
	seconds %= minute;

	printf("%d:%d:%d:%d\n", days, hours, minutes, seconds);
	
	return 0;
}
