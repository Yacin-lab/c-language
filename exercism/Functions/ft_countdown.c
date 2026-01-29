#include <stdio.h>

void ft_countdown(int n);

int main(void) {
    ft_countdown(3);

    return (0);
}

void ft_countdown(int n) {
    if(n < 0)      // Base case < mn 0 bach tprinti hta 0 9bl madir return
        return;
    printf("%d ", n--);    // Print the current n and increment it by 1
    ft_countdown(n);       // Call function with new value of n
}