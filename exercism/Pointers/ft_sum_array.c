#include <stdio.h>

int ft_sum_array(int *arr, int size)
{
    int sum = 0;
    if(size <= 0)   return 0;

    while(size--) {
        sum += *arr;
        arr++;
    }
    return sum;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    printf("sum is: %d\n", ft_sum_array(arr, size));

    return (0);
}