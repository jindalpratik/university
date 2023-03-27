#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos;
    // get the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    // Shift elements to the left starting from the index to delete
    for (int i = pos; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    } // Set the last element to 0
    arr[9] = 0;
    // Print the updated array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}