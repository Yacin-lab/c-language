#include <stdio.h>

int main()
{
    int Age;

    // input
    printf("Enter your age: ");
    scanf("%d", &Age);

    // process
    while (!(Age >= 18 && Age <= 45))
    {
        printf("Sorry, Invalid age\nEnter age again: ");
        scanf("%d", &Age);
    }

    if (Age >= 18 && Age <= 45)
        printf("Valid Age\n");
    else
        printf("Invalid Age, sorry\n");

    return 0;
}