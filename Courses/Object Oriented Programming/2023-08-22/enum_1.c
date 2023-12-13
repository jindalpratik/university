#include <stdio.h>
enum month
{
    jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
} m;

int main()
{
    for (m = jan; m <= dec; ++m)
        printf("%d\n", m + 1);
    return 0;
}