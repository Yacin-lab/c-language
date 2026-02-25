#include <stdio.h>

int ft_count_char(char *str, char c)
{
    int count = 0;

    if (!(*str))
        return (0); 
    if(*str == c)
        count++;

    return count + ft_count_char(str + 1, c);

    // 'b'  → 0 + f("anana")  |       ^  0 + 3 = 3
    // 'a'  → 1 + f("nana")   |       |  1 + 2 = 3
    // 'n'  → 0 + f("ana")    |       |  0 + 2 = 2
    // 'a'  → 1 + f("na")     |       |  1 + 1 = 2
    // 'n'  → 0 + f("a")      |       |  0 + 1 = 1
    // 'a'  → 1 + f("")       |       |  1 + 0 = 1
    // '\0' → return 0        v       |  0
}

int main(void)
{
    printf("%d\n", ft_count_char("banana", 'a'));
    return(0);
}
