#include <stdio.h>

// Power of number
int ft_power(int nb, int power) {
    
    if(power < 0)
        return(0);
    if(power == 0)
        return(1);
    return (nb * ft_power(nb, power - 1));
}

int main(void) {
    printf("\nOutput: ");
    printf("%d\n", ft_power(3, 5));
    return(0);
}