#include <stdio.h>

void bubble_sort(int *arr, int size) {
    int *pos = arr;
    int end = size - 1;
    int i, temp, status;
    
    while(end > 0) {
        arr = pos;
        status = 1;
        i = 0;
        while(i < end) {
            if(*arr > *(arr + 1)) {
                temp = *arr;
                *arr = *(arr + 1);
                *(arr + 1) = temp;
                status = 0;
            }
            arr++;
            i++;
        }
        if(status)
            return;
        end--;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return (0);
}