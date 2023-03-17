#include <stdio.h>
#include <time.h>

int main()
{
    int rows = 6;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= rows - i; ++j)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
