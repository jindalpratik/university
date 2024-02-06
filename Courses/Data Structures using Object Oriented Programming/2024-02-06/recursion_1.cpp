#include <iostream>
using namespace std;

bool check(int arr[], int i, int n)
{
    // base condition
    if (n == 0 || n == 1)
        return true;

    // recursive call
    if (arr[i] < arr[i + 1] && check(arr, i + 1, n - 1))
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int i=0;
    if (check(arr, i, n))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}