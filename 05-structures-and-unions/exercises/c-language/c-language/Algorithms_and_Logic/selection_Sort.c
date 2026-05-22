#include <stdio.h>

void selection_sort(int *arr, int size) {
    int i, j, temp, min_idx;

    i = 0;
    while(i < size-1) {
        min_idx = i;
        j = i + 1;
        // Find the minimum element
        while(j < size) {
            if(arr[min_idx] > arr[j]) {
                min_idx = j;
            }
            j++;
        }
        // Swap minimum with the first element ...
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;

        i++;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return (0);
}