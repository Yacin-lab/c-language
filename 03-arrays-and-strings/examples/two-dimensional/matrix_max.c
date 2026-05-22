#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {3,7,2},
        {9,1,5},
        {4,8,6}
    };

    int max = matrix[0][0];
    int row = 0;
    int col = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("Max = %d\n", max);
    printf("Position = (%d,%d)\n", row, col);

    return 0;
}
