#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int comparisons = 0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            comparisons++;

            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Bubble Sort comparisons: %d\n", comparisons);
}

int main()
{
    int arr[] = {5,3,8,4,2};
    int size = 5;

    bubble_sort(arr, size);

    return 0;
}
