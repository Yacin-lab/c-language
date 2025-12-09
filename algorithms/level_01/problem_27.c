#include <stdio.h>

int main ()
{
	float totalBill, cashPaid;
	
	printf("Enter total bill: ");
        scanf("%f", &totalBill);
	printf("Enter cash paid: ");
	scanf(" %f", &cashPaid);

	printf("reminder to be paid back is %.2f\n", totalBill - cashPaid);

	return 0;
}
