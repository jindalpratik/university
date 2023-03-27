#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;
    // Input elements of first matrix
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input elements of second matrix
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Add the two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the sum matrix
    printf("Sum of the two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}