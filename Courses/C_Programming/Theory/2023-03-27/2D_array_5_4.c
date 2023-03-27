#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int n, i, pos, value;
    // get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // get the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // get the position where we want to insert the new element
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    // get the new element
    printf("Enter the new element: ");
    scanf("%d", &value);
    // shift the elements to the right of the position to make space for the new element
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    // insert the new element
    arr[pos] = value;

    // update the size of the array
    n++;
    // print the updated array
    printf("The updated array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}