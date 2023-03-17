#include <stdio.h>
#include <time.h>

int main()
{
    clock_t begin = clock();

    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf", time_spent);
    return 0;
}
