#include<stdio.h>
int main()
{
    char *p;
    p = "Hello";
    printf("%c",*&*p);
    return 0;
}