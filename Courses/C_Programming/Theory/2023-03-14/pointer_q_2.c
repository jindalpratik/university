#include<stdio.h>

int fun()
{
    return;
}

int main()
{
    int *ptr;
    ptr = fun();
    printf("%u", ptr);
    return 0;
}