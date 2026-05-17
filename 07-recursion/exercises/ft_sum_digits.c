#include <stdio.h>

int ft_sum_digits(int n);

int main(void) {
    printf("%d\n", ft_sum_digits(1234));
    
    return (0);
}

int ft_sum_digits(int n) {
    if(n <= 9)      // ila kant n fiha wahd number returnih
        return(n);
    return (n % 10) + ft_sum_digits(n / 10);

    // Call:   (1234 % 10) + ft(1234 / 10) --> (123 % 10) + ft(123 / 10) --> (12 % 10) + ft(12 / 10) --> return (1)
    // Return:           4 + 6 = 10         <--          3 + 3 = 6        <--         2 + 1 = 3       <-- 1
}