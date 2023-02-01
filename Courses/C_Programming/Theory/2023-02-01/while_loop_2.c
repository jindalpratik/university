#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        printf("%d\n", num);
        num--;
    }
    return 0;
}