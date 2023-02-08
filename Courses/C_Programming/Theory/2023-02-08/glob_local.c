#include<stdio.h>
int g = 20;

int add()
{
    printf("The value of g is %d", g);
    return 0;
}

int main()
{
    int g = 10;
    printf("the value of g is %d\n", g);
    add();
    return 0;
}

