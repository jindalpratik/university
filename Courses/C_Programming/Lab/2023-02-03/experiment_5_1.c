#include<stdio.h>
int main()
{
    int u , a , t;
    printf("Enter the value of u , a and t: ");
    scanf("%d %d %d", &u , &a , &t);
    int V = u + a*t;
    printf("%d", V);
    return 0;
}