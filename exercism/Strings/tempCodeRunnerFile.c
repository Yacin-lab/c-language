#include <stdio.h>

void insertion_sort(int *arr, int size) {

    int i = 0;
    while(i < size) {
        int j = i + 1;
        int k = i;
        while(k >= 0) {
            if(arr[j] < arr[k]) {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
                j = k;
            }

            k--;
        }
        i++;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return (0);
}