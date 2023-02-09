#include<stdio.h>
int a = 10, b = 20;
int main()
{
    int a = 5;
    {
        int c;
        c = b/a;
        printf("%d", c);
    }

}