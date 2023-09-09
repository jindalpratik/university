#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            break;
        count++;
    }
    if (count == n)
        count = 0;
    printf("%d", count);
}