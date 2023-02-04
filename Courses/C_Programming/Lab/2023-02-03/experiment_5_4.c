#include<stdio.h>
#include<math.h>
int main()
{
    int b , p;
    printf("Enter the value of b and p: ");
    scanf("%d %d" , &b , &p);
    int H = sqrt(b*b + p*p);
    printf("%d", H);
    return 0;
}