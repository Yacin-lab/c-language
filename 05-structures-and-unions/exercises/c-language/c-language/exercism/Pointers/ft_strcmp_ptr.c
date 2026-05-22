#include <stdio.h>

int ft_strcmp_ptr(char *s1, char *s2) {
    while(*s1 && *s2) {
        if(*s1 != *s2)
            break;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
} 

int main(void) {
    char s1[] = "abdee";
    char s2[] = "abd";

    printf("%d\n", ft_strcmp_ptr(s1, s2));

    return (0);
}