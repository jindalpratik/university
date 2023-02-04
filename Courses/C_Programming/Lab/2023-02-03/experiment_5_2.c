#include<stdio.h>
int main()
{
    int u , a , t;
    printf("Enter the value of u , a and t: ");
    scanf("%d %d %d", &u , &a , &t);
    int S = u*t + a*t*t/2;
    printf("%d", S);
    return 0;
}