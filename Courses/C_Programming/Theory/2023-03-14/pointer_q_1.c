#include <stdio.h>
int main()
{
    int num1, num2 , *ptr1, *ptr2;
    scanf("%d %d",&num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    printf("The sum of two number is: %d", *ptr1 + *ptr2);
    return 0;
}