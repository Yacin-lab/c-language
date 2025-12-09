#include <stdio.h>
#include <unistd.h>

int main () {

	int p, n, di, q, d;
	int pennies;
	float dollars;
	
	printf("Enter Pennis: ");
	scanf("%d", &p);
	printf("Enter Nickels: ");
        scanf("%d", &n);
	printf("Enter Dimes: ");
        scanf("%d", &di);
	printf("Enter Quarters: ");
        scanf("%d", &q);
	printf("Enter Dollars: ");
        scanf("%d", &d);

	pennies = p + (n * 5) + (di * 10) + (q * 25) + (d * 100);
	dollars = pennies / 100.0;

	printf("\npennies = %d\ndollars = %.2f$\n", pennies, dollars);

	return 0;
}
