#include <stdio.h>
int main()
{
    int i, toSearch, found = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter element to search: ");
    scanf("%d", &toSearch);
    for (i = 0; i < 10; i++)
    {
        // If element is found in array then raise found flag and terminate from loop.
        if (arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    // * If element is not found in array
    if (found == 1)
        printf("%d is found at position %d", toSearch, i + 1);
    else
        printf("%d is not found in the array", toSearch);
    return 0;
}