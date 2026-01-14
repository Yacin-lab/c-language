#include <stdio.h>

int binarySearch(int arr[], int size, int value)
{
	int high = size - 1;
	int mid;
        int low = 0;

        while(low <= high)
        {
                mid = (low + high) / 2;
                if(value == arr[mid])
                {
                        printf("%d Found at index %d\n", value, mid);
                        return (0);
                }
                else if(value > arr[mid])
                        low = mid + 1;
                else
                        high = mid - 1;
	}
	return (1);
}

int main(void)
{
	int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
	int size = 10;
	int search_number = 2;

	return binarySearch(arr, size, search_number);
}
