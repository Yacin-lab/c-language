#include <stdio.h>

// Sum of elements in array
int ft_sum(int *arr, int size) {
    
    if(!size)
        return(0);
    
    return *arr + ft_sum(arr + 1, size - 1); // Call function with pointer to 
                                             // the next number and new size

    // Call:   1 + ft(1234, 4) --> 2 + ft(234, 3) --> 3 + ft(34, 2) --> 4 + ft(4, 1) --> ft(!, 0)
    // Return: 1 + 9 = 10      <-- 2 + 7 = 9      <-- 3 + 4 = 7     <-- 4 + 0 = 4    <-- 0
}

int main(void) {
    int array[] = {1, 2, 3, 4};
    
    printf("\nOutput: ");
    printf("%d\n", ft_sum(array, 4));
    return(0);
}