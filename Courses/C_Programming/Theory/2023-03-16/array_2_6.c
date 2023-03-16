#include <stdio.h>
int main()
{
    int n, i, max;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    int a[n]; // Declaring array
    printf("\n Enter elements \n", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    // make Largest element as the first element
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("\n largest element is : %d", max);
}