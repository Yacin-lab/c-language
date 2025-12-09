#include <stdio.h>
#include <math.h>

int main ()
{
        double area;
	const int pi = 3.14;
        int r = 5;

        area = pi * r*r;
        printf("Circle area is: %.2f\n", area);

        return 0;
}
