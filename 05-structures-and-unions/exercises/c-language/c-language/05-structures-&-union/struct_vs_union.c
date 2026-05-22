#include <stdio.h>

/*
  struct: Each field has its own memory.
  union: Everything shares the same memory.
*/
struct S
{
    int i;
    float f;
};

union U
{
    int i;
    float f;
};

int main()
{
    struct S s;
    union U u;

    s.i = 10;
    s.f = 5.5;

    u.i = 10;
    u.f = 5.5;

    printf("Struct -> i: %d, f: %f\n", s.i, s.f);
    printf("Union -> i: %d, f: %f\n", u.i, u.f);    // The field contains the last value of f

    printf("Size of struct: %lu\n", sizeof(s));    // It takes sum of the sizes of all types
    printf("Size of union: %lu\n", sizeof(u));    // It takes the size of the largest type

    return 0;
}
