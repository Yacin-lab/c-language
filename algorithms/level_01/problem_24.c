#include <unistd.h>
#include <stdio.h>

int main () {
	
	float num1, num2, result;
	char opType;

	printf("Enter Numbrt1: ");
	scanf("%f", &num1);
	printf("Enter operation type: ");
        scanf(" %c", &opType);
	printf("Enter Numbrt2: ");
        scanf("%f", &num2);
	
	if (opType == '+')
		result = num1 + num2;
	else if (opType == '-')
                result = num1 - num2;
	else if (opType == '*')
                result = num1 * num2;
	else if (opType == '/')
                result = num1 / num2;
	else
	{
		write(1, "Error\n", 6);
		return 0;
	}

	printf("\nresult is = %.2f\n", result);

	return 0;
}
