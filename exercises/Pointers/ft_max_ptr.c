#include <stdio.h>

char *ft_first_occurrence(char *str, char c)
{
    if(*str == '\0')
        return NULL;
    if(*str == c)
        return str;

    ft_first_occurrence(str + 1, c);
}

int main(void)
{
    char str[] = "Hello";

    char *ptr = ft_first_occurrence(str, 'l');
    if(ptr)
        printf("found: %s\n", ptr);
    else
        printf("not found!\n");

    return (0);
}