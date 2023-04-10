#include <stdio.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n], temp, i = 0;
    while (i < n)
    {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &temp);
        arr[i] = temp;
        i++;
    }
    i = 0;

    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    int smallest, index, j, temp_2;
    i = 0;
    while (i < n)
    {
        j = i + 1;
        smallest = arr[i];
        index = i;
        // printf("f");
        while (j < n)
        {
            // loop through the array starting from index + 1 and check for the smallest as compared to the first element.
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                temp_2 = arr[index];
                arr[index] = arr[j];
                arr[j] = temp_2;
            }
            // printf("k");
            j++;
        }
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}