#include <iostream>
#include <algorithm>
using namespace std;

// bool compare(int a, int b)
// {
//     return a < b;
// }

int main()
{
    int arr[] = {5, 4, -3, 2, 1, -5, -9, 8, -12};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n, less<int>()); // greater<int>()
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}