#include <stdio.h>

int max_value(int *arr, int size);

int main(void) {
    int arr[] = {1, 5, 3, 9, 2};
    
    printf("%d\n", max_value(arr, 5));
    return (0);
}

int max_value(int *arr, int size) {
    int max;

    if(size == 0)   return (0);
    if(size == 1)   return arr[0];

    max = max_value(arr + 1, size - 1);
    return arr[0] > max ? arr[0] : max;

    // Call:    ft(1.2.5.3, 4) --> ft(2.5.3, 3) --> ft(5.3, 2) --> ft(3, 1) --> return 3
    // Return:      (1 > 5)?   <--   (2 > 5)?   <--  (5 > 3)?  <--    3
    //                 ^                ^               ^             ^
    //                 |                |               |             |
    //              return 5         return 5        return 5      return 3
}