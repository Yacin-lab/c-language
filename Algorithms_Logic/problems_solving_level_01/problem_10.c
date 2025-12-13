#include <stdio.h>

int main()
{
	float A;
	const float pi = 3.14159;
	float area;

	// input
	printf("Enter circle diameter: ");
	scanf("%f", &A);

	// process
	area = (pi * A*A) / 4;

	// output
	printf("Circle area is: %.2f\n", area);

	return 0;
}
