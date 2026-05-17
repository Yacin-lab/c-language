#include <stdio.h>

int ft_count_char_ptr(char *str, char c)
{
    int count = 0;

    if(*str == '\0')
        return 0;
    if(*str == c)
        count = 1;
    
    return count + ft_count_char_ptr(str + 1, c);
}

int main(void)
{
    char str[] = "banana";
    char character = 'n';

    printf("'%c' appears %d times\n", 
            character, ft_count_char_ptr(str, character));

    return (0);
}