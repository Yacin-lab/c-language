#include <stdio.h>

int main()
{
    int arr[] = {4,8,1,6,9};
    int size = 5;
    int target = 6;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}
