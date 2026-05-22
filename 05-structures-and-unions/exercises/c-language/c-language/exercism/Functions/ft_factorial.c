#include <stdio.h>

// Factorial of number 
int ft_factorial(int nb) {
    if(nb < 0)
        return (0);
    if(nb == 0)
        return (1);
    
    return (nb * ft_factorial(nb - 1));
}

int main(void) {
    printf("\nOutput: ");
    printf("%d\n", ft_factorial(5));

    return (0);
}