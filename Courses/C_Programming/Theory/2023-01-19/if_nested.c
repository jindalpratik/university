#include <stdio.h>
int main()
{
    int i = 100;
    if (i == 100)
    {
        if (i < 150)
            printf("i is smaller than 150\n");
        if (i < 120)
            printf("i is smaller than 120\n");
        else
            printf("i is greater than 150\n");
    }
    return 0;
}