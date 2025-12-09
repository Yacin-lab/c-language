#include <stdio.h>

int main()
{
	int swap;
        int num1 = 40, num2 = 90;
	
	printf("number_1 is: %d\n", num1);
	printf("number_2 is: %d\n\n", num2);
	
	swap = num1;
	num1 = num2;
	num2 = swap;

	printf("number_1 is: %d\n", num1);
        printf("number_2 is: %d\n", num2);
        
}
