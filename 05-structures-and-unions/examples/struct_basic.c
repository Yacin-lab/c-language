#include <stdio.h>

/*
    Idea:
    A struct groups different variables into one type.
*/
struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person p1 = {"Yassine", 28};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
