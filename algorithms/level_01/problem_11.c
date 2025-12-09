#include <stdio.h>

int main()
{
        float l;
        const float pi = 3.14159;
        float area;

        // input
        printf("Enter circumference: ");
        scanf("%f", &l);

        // process
        area = l*l /(4 * pi);

        // output
        printf("Circle area is: %.2f\n", area);

        return 0;
}
