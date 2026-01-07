#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*enum e_ascii
{
    lower_a = 97,
    lower_z = 122,
    UPPER_A = 65,
    UPPER_Z = 90,
    SYMBOL_START = 33,
    SYMBOL_END = 47,
    DIGIT_START = 48,
    DIGIT_END = 57,
};

int randumEliments(int start, int end)
{
    int random = rand() % (end - start + 1) + start;
    return random;
}

int main(void)
{
    srand((unsigned)time(NULL));

    printf("%c\n", randumEliments(lower_a, lower_z));
    printf("%c\n", randumEliments(UPPER_A, UPPER_Z));
    printf("%c\n", randumEliments(SYMBOL_START, SYMBOL_END));
    printf("%c\n", randumEliments(DIGIT_START, DIGIT_END));
    return (0);
}*/

enum typeChar
{
    SmallLetter = 1,
    CapitalLetter = 2,
    Symbol = 3,
    Digit = 4,
};

int randumEliments(enum typeChar type)
{
    int start;
    int end;
    switch(type)
    {
        case SmallLetter:
            start = 97; end = 122;
            break;
        case CapitalLetter:
            start = 65; end = 90;
            break;
        case Symbol:
            start = 33; end = 47;
            break;
        case Digit:
            start = 48; end = 57;
            break;
        default:
            return (-1);    // Because -1 doesn't exist in the ASCII table, it means an error.
                            // However, 0 does exist in the ASCII table.
    }
    return (rand() % (end - start + 1) + start);
}

int main(void)
{
    srand((unsigned)time(NULL));

    printf("%c\n", randumEliments(SmallLetter));
    printf("%c\n", randumEliments(CapitalLetter));
    printf("%c\n", randumEliments(Symbol));
    printf("%c\n", randumEliments(Digit));
    return (0);
}