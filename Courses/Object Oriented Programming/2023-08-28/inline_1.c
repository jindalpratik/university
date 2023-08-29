#include <stdio.h>

static inline void sum(int i, int j)
{
    printf("Sum = %d", i + j);
}

int main()
{
    sum(1, 2);
    return 0;
}