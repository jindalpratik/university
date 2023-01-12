#include<stdio.h>

int main()
{
    float salary;
    float gs;
    scanf("%f", &salary);
    gs = salary * 40 / 100;
    printf("%.1f", gs);
    return 0;
}