#include <stdio.h>

#define HELLO 100

int main()
{
#ifdef hi
    {
        printf("Hello is defined\n");
    }
#else
    {
        printf("Hello is not defined\n");
    }
#endif

    return 0;
}