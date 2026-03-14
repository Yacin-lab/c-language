#include <stdio.h>

void ft_reverse_ptr_array(int **arr, int size) {
    int **left = arr;               // hna pointit 3la first elem f arr li howa &a
    int **right = arr + (size - 1); // hna pointit 3la last elem f arr li howa &c
    int *temp;     // variable pointer bach nchanger addresses, man9drch ndir variable 3adi
                   // 7it elements f arr hna 3ibara 3la pointers (addresses)

    if(!arr || size <= 0)
        return;

    while(left < right) {       // first:
        temp = *left;           // temp == *arr[0]      == &a
        *left = *right;         // *arr[0] == *arr[2]   == &c
        *right = temp;          // *arr[2] == *arr[0]   == &a
        left++;
        right--;
    }
}

int main(void) {
    int a=1, b=2, c=3;
    int *arr[] = {&a, &b, &c};

    for(int i = 0; i < 3; i++) {
        printf("%p\n", *(arr + i));
    }
    printf("\n\n");

    ft_reverse_ptr_array(arr, 3);

    for(int i = 0; i < 3; i++) {
        printf("%p\n", *(arr + i));
    }
    printf("\n");

    return (0);
}