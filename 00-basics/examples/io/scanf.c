#include <stdio.h>

int main(void)
{
    int number;
    float salary;
    char initial;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your initial: ");
    scanf(" %c", &initial);

    printf("Number = %d\n", number);
    printf("Salary = %.2f\n", salary);
    printf("Initial = %c\n", initial);

    return 0;
}
