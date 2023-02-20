#include <stdio.h>
int main()
{
    register int a = 1;
    for (; a <= 5; a++)
        printf("\t %d", a);
}