#include <stdio.h>

/*int main()
{
    int i, n;

    scanf("%d", &n);

    i = 0;
    i += 1; 
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}*/

int main()
{
    int i, n;

    scanf("%d", &n);

    i = n + 1;
    i = i - 1;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}