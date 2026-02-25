#include <stdio.h>

int ft_is_palindrome(char *str, int start, int end)
{
    if(start >= end)
        return(1);
    if(!(str[start] == str[end]))
        return (0);
    return ft_is_palindrome(str, start + 1, end - 1);

    // f(0,4) [r == r]  ->  f(1,3) [a == a]  ->  f(2,2) [start == end]  <- return 1
    //  ^                     ^                    ^
    //  |                     |                    |
    // return 1         <-  return 1         <-  return 1

}

int main(void)
{
    char string[] = "radar";
    int size = 5;

    printf("%d\n", ft_is_palindrome(string, 0, size - 1));
    return(0);
}