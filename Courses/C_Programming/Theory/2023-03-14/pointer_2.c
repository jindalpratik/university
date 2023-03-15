#include <stdio.h>
int main()
{
    int *ptr, q;
    q = 50;
    ptr = &q;
    printf("Value of q = %d\n", q);
    printf("Address of q = %d\n", ptr);
    printf("Value of q by pointer = %d", *ptr);
    return 0;
}