#include <stdio.h>

/*
    Idea:
    A struct groups different variables into one type.
*/
struct Student
{
    char name[50];
    int grade;
};

int main()
{
    struct Student students[2] = {
        {"Ali", 15},
        {"Sara", 18}
    };

    for (int i = 0; i < 2; i++)
    {
        printf("%s -> %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
