#include <stdio.h>

#define HELLO 100

int main()
{
    #ifndef hi
    {
        printf("Hi is not defined yet. But we will define it now\n");
        #define hi 300
    }
    #else
    {
        printf("Hi is already defined\n");
    }
    #endif

    return 0;
}