#include <stdio.h>
int main()
{
    int number;
    number = 11;
repeat:
    printf("%d\n", number);
    number++;
    if (number <= 10)
        goto repeat;
    return 0;
}