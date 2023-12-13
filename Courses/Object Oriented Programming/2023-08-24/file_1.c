#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("first.txt", "r");
    if (ptr != NULL)
        printf("File opened successfully.");
    else
        printf("File not found.");
    return 0;
}