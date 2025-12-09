#include <stdio.h>

int main()
{
        int num1 = 30 , num2 = 10,  num3 = 20;

        if (num1 > num2)
	{
		// max is num1
		if (num1 > num3)
			printf("Max number is: %d\n", num1);
		else
			printf("Max number is: %d\n", num3);
	}
	else
	{
                // max is num2
                if (num2 > num3)
                        printf("Max number is: %d\n", num2);
                else
                        printf("Max number is: %d\n", num3);
        }
}
