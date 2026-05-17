#include <stdio.h>

int main()
{
    int arr[] = {1,3,5,7,9,11};
    int size = 6;
    int target = 7;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            printf("Found at index %d\n", mid);
            return 0;
        }

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Not found\n");
    return 0;
}
