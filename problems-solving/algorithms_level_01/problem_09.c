#include <stdio.h>
#include <math.h>

int main ()
{
        double area;
	const int pi = 3.14;
        int D = 10;

        area = (pi * D*D) / 4;
        printf("Circle area is: %.2f\n", area);

        return 0;
}
