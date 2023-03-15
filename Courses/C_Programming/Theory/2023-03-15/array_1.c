#include <stdio.h>
int main()
{
    int a[10] = {[0] = 1, [5] = 2, [6] = 3};
    for (int i = 0; i < 10; i++)
    {
        printf("\nAddress of %d is a[%d]", a[i], i);
    }
    return 0;
}