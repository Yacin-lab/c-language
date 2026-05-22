#include <stdio.h>

int main()
{
    int arr[] = {1,2,2,3,4,4,5};
    int size = 7;

    for (int i = 0; i < size; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
