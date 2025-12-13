#include <stdio.h>

int main ()
{
    int i;
    int n;
    int sumOdd;

    // input
    printf("Entre number: ");
    scanf("%d", &n);

    // processe
    sumOdd = 0;
    i = 1;
    if (n > 0)
    {
    	while (i <= n)
    	{
		if (i % 2 == 1) // or if (i % 2 != 0)
			sumOdd += i;
       	 i++;
    	}
    }
    else
    {
	i = -1;
    	while (i >= n)
        {
                if (i % 2 == - 1) // or if (i % 2 != 0)
                        sumOdd += i;
         i--;
        }

    }

    // output
    printf("Sum of Odd numbers from 1 to %d is: %d\n",n ,sumOdd);
    
    return 0;
}/*
#include <stdio.h>

int main ()
{
    int i;
    int n;
    int sumOdd;

    // input
    do
    {
            printf("Entre number: ");
            scanf("%d", &n);

            if (n < 0)
                    printf("Sorry Entre number correctly\n");
    } while (n < 0);

    // processe
    sumOdd = 0;
    i = 1;
    while (i < n)
    {
        if (i % 2 == 1)
                sumOdd += i;
        i++;
    }

    // output
    printf("Sum of Odd numbers from 1 to %d is: %d\n",n ,sumOdd);

    return 0;
}*/
