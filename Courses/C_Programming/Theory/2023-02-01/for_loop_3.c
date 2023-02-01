#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", i , num , num * i);
    }
}