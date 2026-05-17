#include <stdio.h>

int ft_is_sorted(int *arr, int size);

int main(void) {
    int arr[] = {1, 2, 3, 4};
    
    printf("%d\n", ft_is_sorted(arr, 4));
    return(0);
}

int ft_is_sorted(int *arr, int size) {
    if(size == 1)       // ila wsalt l end dyal array (size = 1 y3ni b9a element wahd)
        return (1);     // y3ni raha sorted, then return 1

    if(arr[0] > arr[1]) // ila kan first element > next element, return 0 w rja3 bla matkml
        return (0);
    return ft_is_sorted(arr + 1, size - 1); // Change the start of array to the next number.
                                            // and decrement the size
    // Sorted array
    // Call:    ft(1.2.3.4, 4) --> ft(2.3.4, 3) --> ft(3.4, 2) --> ft(4, 1) --> return 1
    // Return:          1      <--      1       <--     1      <--    1

    // Unsorted array
    // Call:    ft(1.2.4.3, 4) --> ft(2.4.3, 3) --> ft(4.3, 2) --> return 0
    // Return:          0      <--      0       <--     0
}