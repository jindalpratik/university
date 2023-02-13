#include<stdio.h>
int main()
{
    int a , b , tmp;
    printf("Enter 1st Number as: ");
    scanf("%d", &a);
    printf("Enter 2nd Number as: ");
    scanf("%d", &b);
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d",a,b);
    return 0;
}