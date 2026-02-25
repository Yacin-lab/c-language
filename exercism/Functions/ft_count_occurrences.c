#include <stdio.h>

int ft_count_occurrences(int *arr, int size, int value)
{
    int count = 0;
    if(size < 1)
        return (0);
    if(*arr == value)
        count++;
    return count + ft_count_occurrences(arr + 1, size - 1, value);

    // f(1,2,3,2,2) -> 1 + f(2,3,2,2) -> 0 + f(3,2,2) -> 1 + f(2,2) -> 1 + f(2)
    //     ^                   ^                 ^              ^           ^
    //     |                   |                 |              |           |
    //  return 3            return 2          return 2       return 1    return 0
}

int main(void)
{
    int arr[] = {1, 2, 3, 2, 2};
    int size = 5;

    printf("%d\n", ft_count_occurrences(arr, size, 2));

    return (0);
}