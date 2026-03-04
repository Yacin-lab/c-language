#include <stdio.h>

void insertion_sort(int *arr, int size) {
    int i = 1;
    while(i < size) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
    }
}

int two_sum_sorted(int *arr, int size, int target) {
    int sum = 0;
    int left, right;

    insertion_sort(arr, size);

    left = 0;
    right = size - 1;
    while(left < right) {
        sum = arr[left] + arr[right];
        if(sum == target)
            return (1);
        else if(sum < target)
            left++;
        else
            right--;
    }
    return (0);
}

int main(void) {
    int arr[] = {11, 7, 4, 15, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", two_sum_sorted(arr, size, 20));

    return (0);
}