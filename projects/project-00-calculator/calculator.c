#include <stdio.h>

float   ft_Add(float a, float b);
float   ft_Sub(float a, float b);
float   ft_Mul(float a, float b);
float   ft_Div(float a, float b);

int		main(void)
{
    float   a, b;
    int     choice;
    int     valide = 0;
    float   result = 0;

    do {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Exit\n\n");
        printf("Choice: ");
        valide = scanf("%d", &choice);
        if(choice == 0)
                continue;
        if(!valide || (choice > 4 || choice < 0))
        {
            while(getchar() != '\n');
            printf("Invalid input\n\n");
            continue;
        }
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        switch(choice)
        {
            case 1:      result = ft_Add(a, b); break;
            case 2:      result = ft_Sub(a, b); break;
            case 3:      result = ft_Mul(a, b); break;
            case 4:
                    if(b == 0)
                    {
                        printf("Error! division by zero\n\n");
                        continue;
                    }
                    result = ft_Div(a, b); break;
            default:
                    printf("Wrong choice.\n");
                    break;
    	}
        printf("---------------\nResult = %.2f\n---------------\n", result);
    } while(choice != 0);
    return (0);
}

float   ft_Add(float a, float b)
{
    return (a + b);
}

float   ft_Sub(float a, float b)
{
    return (a - b);
}

float   ft_Mul(float a, float b)
{
    return (a * b);
}

float   ft_Div(float a, float b)
{
    return (a / b);
}