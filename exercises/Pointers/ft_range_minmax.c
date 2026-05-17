#include <stdio.h>

void ft_range_minmax(int *arr, int size, int **min, int **max) {
    
    if(!arr || size <= 0)
        return;

    *min = arr + 1;
    *max = arr + 1;

    while(size) {
        if(*arr < **min)
            *min = arr;
        if(*arr > **max)
            *max = arr;
        arr++; 
        size--;
    }
}

int main(void) {
    int arr[] = {7, 2, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *min;
    int *max;

    ft_range_minmax(arr, size, &min, &max);

    printf("min: %d\n", *min);
    printf("max: %d\n", *max);

    return (0);
}