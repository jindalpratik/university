#include <stdio.h>

static inline int sum_of_array(int arr[], int m)
{
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter number of items in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    int sum = sum_of_array(arr, n);
    printf("%d", sum);
    return 0;
}