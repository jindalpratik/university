#include <stdio.h>
int main()
{
    int i = 1, num;
    printf("Enter the number to print to: ");
    scanf("%d", &num);
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= num);
    return 0;
}