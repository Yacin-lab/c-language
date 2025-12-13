#include <stdio.h>
#include <math.h>

int main()
{
	double area; //"double" makes the program get precision because sqrt(...) returns a double
	int a = 5 , b = 40;
	
	area = a * sqrt(b*b - a*a);
	printf("Rectangle area Through Diagonal and Side Area is: %.2f\n", area);
	
	return (0);
}
