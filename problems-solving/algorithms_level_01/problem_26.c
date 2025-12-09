#include <stdio.h>
#include <math.h>

void is_prime(int number, int i)
{
    int di;
    di = round(number/2.0);
    
    while (i <= di)
    {
        if (number % i != 0)
            i++;
        else
        {
            printf("%d is not prime number\n", number);
            return;
        }
    }
    printf("%d is Prime number\n", number);
}

int main()
{
    int num, i;
    
    scanf("%d", &num);
    
    i = 2;
    if (num < i)
    {
        printf("%d is not prime number\n", num);
        return 0;
    }
    is_prime(num, i);

    return 0;
}
