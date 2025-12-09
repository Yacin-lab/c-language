#include <stdio.h>

int main () {
        float Loan, Mpayment, months;

        printf("Enter the Loan Amount: ");
        scanf("%f", &Loan);
        printf("Enter the Months you need to settle the loan: ");
        scanf(" %f", &months);

        Mpayment = Loan / months;

        printf("You need to pay %.1f$ Monthly\n", Mpayment);

        return 0;
}
