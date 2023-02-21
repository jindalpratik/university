#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char upr[50]; // declare character array
    printf("Enter the upper case string: ");
    gets(upr);
    strlwr(upr);
    printf("The lowercase string is: %s", upr);
    return 0;
}