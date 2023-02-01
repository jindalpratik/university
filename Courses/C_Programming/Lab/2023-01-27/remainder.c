// Write 

#include<stdio.h>

int main()
{
    int divident, divisor, remainder1;
    printf("Enter the divident and divisor: ");
    scanf("%d%d", &divident, &divisor);
    remainder1 = divident % divisor;
    printf("The remainder is: %d", remainder1);
    return 0;
}