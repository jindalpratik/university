#include <stdio.h>
int main()
{
    int len_arr;
    printf("Enter the length of the array: ");
    scanf("%d",&len_arr);
    int a[len_arr];
    int i;
    for (i = 0; i < len_arr; i++)
    {
        int n;
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d",&n);
        a[i] = n; 
    }
    for (i = 0; i < len_arr; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = len_arr-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}