#include <stdio.h>
int main(void)
{
    int m, n;
    int arr[] = {4, 3, 1, 2};
    int *p = arr;
    // p points to the first element of the integer array arr
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *p);
        p++;
        // shifts the pointer to the next element of the array
    }
    return 0;
}