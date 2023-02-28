#include<stdio.h>
int odd_even(int a)
{
    if (a%2 == 0)
    {
        printf("%d is Even",a);
    }
    else{
        printf("%d is Odd",a);
    }
    return 0;
}
int main()
{
    int x = 10;
    odd_even(x);
    return 0;
}