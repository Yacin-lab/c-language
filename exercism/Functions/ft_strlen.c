#include <stdio.h>

// String length
int ft_strlen(char *str) {
    
    if(*str =='\0')
        return(0);
    
    return (1 + ft_strlen(str + 1)); // Call function with pointer to the next element

    // Call:   1 + ft(Hello) --> 1 + ft(ello) --> 1 + ft(llo) --> 1 + ft(lo) --> 1 + ft(o) --> ft(\0)
    // Return: 1 + 4 = 5     <-- 1 + 3 = 4    <-- 1 + 2 = 3   <-- 1 + 1 = 2  <-- 1 + 0 = 1 <-- 0
}

int main(void) {
    printf("\nOutput: ");
    printf("%d\n", ft_strlen("Hello"));
    return(0);
}