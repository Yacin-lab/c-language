#include <stdio.h>

int main () {
	float Loan, Mpayment, months;
	
	printf("Enter the Loan Amount: ");
	scanf("%f", &Loan);
	printf("Enter the Monthly payment (jehdk): ");
        scanf(" %f", &Mpayment);

	months = Loan / Mpayment;

	printf("You need %.1f Months for settle the loan\n", months);

	return 0;
}
