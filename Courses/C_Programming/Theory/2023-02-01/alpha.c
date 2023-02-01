#include<stdio.h>
int main()
{
    char abc = 'a';
    while(abc != 'z')
    {
        printf("%c", abc);
        abc++;
    }
    printf("z\n");
    char ABC = 'A';
    while( ABC != 'Z')
    {
        printf("%c", ABC);
        ABC++;
    }
    printf("Z\n");
    return 0;
}