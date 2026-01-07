#include <stdio.h>

void allCombLetter()
{
    int i = 65;
    while(i <= 90)
    {
        int j = 65;
        while(j <= 90)
        {
            int k = 65;
            while(k <= 90)
            {
                printf("%c", i);
                printf("%c", j);
                printf("%c\n", k);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    allCombLetter();
    return (0);
}



/*#include <stdio.h>

void comb3(char one, char tow, char three)
{
    printf("%c%c%c\n", one, tow, three);
    if(three == 'Z')
        return;
    comb3(one, tow, three + 1);
}

void comb2(char one, char tow, char three)
{
    comb3(one, tow, three);
    if(tow == 'Z')
        return;
    comb2(one, tow + 1, three);
}

void comb1(char one, char tow, char three)
{
    comb2(one, tow, three);
    if(one == 'Z')
        return;
    comb1(one + 1, tow, three);
}

int main()
{
    char letter = 'A';
    comb1(letter, letter, letter);

    return 0;
}*/