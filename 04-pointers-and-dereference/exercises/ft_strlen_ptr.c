#include <stdio.h>

int ft_strlen_ptr(char *str)
{
    int len = 0;

    while(*str) {
        len++;
        str++;
    }
    return len;
}

int main(void)
{
    char str[] = "hello";

    ft_strlen_ptr(str);
    printf("length is: %d\n", ft_strlen_ptr(str));

    return (0);
}