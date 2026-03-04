#include <stdio.h>

int findMinElement(int arr[], int size) {
	int minValue = arr[i];
	for(int i = 0; i < size; i++) {
		if(arr[i] < minValue)
			minValue = arr[i];
	}
	return (minValue);
}

int findMaxElement(int arr[], int size) {
        int maxValue = arr[0];
        for(int i = 0; i < size; i++) {
                if(arr[i] > maxValue)
			maxValue = arr[i];
        }
        return (maxValue);
}

int main(void) {
	int arr[] = {2, 7, 12, 9, 6, 1, 4};
	printf("\nMin Value = %d\n", findMinElement(arr, 7));
	printf("Max Value = %d\n\n", findMaxElement(arr, 7));

	return (0);
}
