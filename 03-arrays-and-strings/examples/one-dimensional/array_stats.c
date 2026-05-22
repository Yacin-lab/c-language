#include <stdio.h>

int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int size = 5;

    int sum = 0;
    int max = arr[0];
    int min = arr[0];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    float average = (float)sum / size;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}
