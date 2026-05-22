#include <stdio.h>

void insertion_sort(int *arr, int size) {
    int i, j, key;

    i = 1;      // Starting from the second element
    while(i < size) {
        key = arr[i];
        j = i - 1;      // Shift while element > key
        while(j >= 0 && arr[j] > key) {     //drt had condition fl while 7it kaykono elem aslan mrtbin 9bal
            arr[j + 1] = arr[j];            // (kan3tabr awal elem mrtab ms kanwsl lih fl comp)
            j--;                            // y3ni awal wahd ntla9a m3ah sghar mn key hadik hya blasto
        }
        // Move the key to its correct position
        arr[j + 1] = key;
        i++;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return (0);
}