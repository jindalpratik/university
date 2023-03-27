#include <stdio.h>
int main(void)
{
    int arr[2][3] = {{3, 2, 1}, {8, 9, 10}};
    int *p[2];
    p[0] = arr[0]; // Pointer points to first row of 2D array
    p[1] = arr[1]; // Pointer points to second row of 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}