#include <stdio.h>
#include <math.h>

int main()
{
        float a, b, c, p ,div;
        float pi = 3.14159;
        float area;

        // input
        printf("Enter a: ");
        scanf("%f", &a);
        printf("Enter b: ");
        scanf("%f", &b);
        printf("Enter c: ");
        scanf("%f", &c);

       // process
        p = (a + b + c) / 2;
        div = (a*b*c) / (4 * sqrt(p *(p - a)*(p - b)*(p - c)));
        area = pi * div*div;

        // output
        printf("Circle area is: %.2f\n", area);
        return 0;
}