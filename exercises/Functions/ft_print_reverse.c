#include <unistd.h>

void ft_print_reverse(char *str)
{
    if (!(*str))
        return;
    ft_print_reverse(str + 1);
    write(1, str, 1);

    // f(abcd)  ->  f(bcd)  ->  f(cd) ->  f(d)  <-  return;
    //    |            |          |         |
    //    v            v          v         v
    //  print(a)    print(b)   print(c)  print(d)
}

int main(void)
{
    ft_print_reverse("abcd");
    return(0);
}