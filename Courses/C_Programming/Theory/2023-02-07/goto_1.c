#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if (number <= 0)
        goto end;
    printf("Number is : %d", number);
end:
    printf("\nBye Bye !!!");
    // printf("It does go in there");
    return 0;
}