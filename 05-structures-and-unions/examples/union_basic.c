#include <stdio.h>

/*
    Idea:
    The union uses the same memory for all fields.
*/
union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 5.5;
    printf("f = %f\n", d.f);

    return 0;
}
