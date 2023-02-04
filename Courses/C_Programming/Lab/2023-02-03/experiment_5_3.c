#include<stdio.h>
#include<math.h>
int main()
{
    int a , b , c;
    printf("Enter the value of a , b and c: ");
    scanf("%d %d %d", &a , &b , &c);
    int T = 2*a + sqrt(b + 9*c);
    printf("%d", T);
    return 0;
}