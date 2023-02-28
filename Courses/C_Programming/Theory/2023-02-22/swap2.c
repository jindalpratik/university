#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap x=%d, y=%d", a, b);
}
int main()
{
    int x = 10, y = 20;
    printf("Before swap x=%d, y=%d\n", x, y);
    swap(&x, &y);
}