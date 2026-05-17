#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
