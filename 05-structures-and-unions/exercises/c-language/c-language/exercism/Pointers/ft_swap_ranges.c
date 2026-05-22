#include <stdio.h>

void ft_swap_ranges(int *a, int *b, int len) {
    int temp;

    while(len--) {
        temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b++;
    }
}

int main(void) {
    int a[] = {1, 2, 3, 4};
    int b[] = {4, 5, 6, 3};
    int size = sizeof(a) / sizeof(a[0]);

    ft_swap_ranges(a, b, size);

    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return (0);
}