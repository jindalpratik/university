#include <iostream>
using namespace std;

void insertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev -= 1;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    int arr[] = {5, 6, 7, 8, 1, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}