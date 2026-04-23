#include <stdio.h>

struct Point
{
    int x;
    int y;
};

void print_point(struct Point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

int main()
{
    struct Point p1 = {3, 7};

    print_point(p1);

    return 0;
}
