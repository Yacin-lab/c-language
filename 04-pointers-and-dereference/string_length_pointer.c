#include <stdio.h>

int string_length(char *str)
{
    char *ptr = str;

    while(*str != '\0')
    {
        str++;
    }

    return (str - ptr);
}

int main()
{
    char text[] = "hello";

    printf("length = %d\n", string_length(text));

    return 0;
}
