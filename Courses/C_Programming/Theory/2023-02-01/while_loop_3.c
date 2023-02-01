#include <stdio.h>
int main()
{
    int j = 1 , num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (j += 2, j <= num)
    {
        printf("%d ", j);
    }
    printf("%d", j);
}