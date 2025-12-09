#include <stdio.h>

int main ()
{
        float billValue, totalBill;

        printf("Enter bill value: ");
        scanf("%f", &billValue);

	totalBill = (billValue * 1.1) * 1.16;

        printf("total bill is %.2f\n", totalBill);

        return 0;
}
