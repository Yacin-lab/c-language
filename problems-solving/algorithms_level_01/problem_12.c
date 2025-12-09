#include <stdio.h>

int main()
{
        float a, b;
        const float pi = 3.14159;
        float area;

        // input
        printf("Enter a: ");
        scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);

        // process
        area = pi * b*b / 4 *((2*a - b) / (2*a + b));

        // output
        printf("Circle area is: %.2f\n", area);

        return 0;
}
