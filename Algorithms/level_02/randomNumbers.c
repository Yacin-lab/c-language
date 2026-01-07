#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int start, int end)
{
    int randNum = rand() % (end - start + 1) + start;
    return randNum;
} 

int main(void)
{
    srand((unsigned)time(NULL));

    printf("%d\n", randomNumber(1, 10));
    return (0);
}

/*int main()
{
    srand(time(NULL));
    int x = rand() % (5 - 2 + 1) + 2;
    
    printf("%d\n", x);

    return 0;
}*/