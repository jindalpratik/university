#include <iostream>
using namespace std;

// As arrays are passed by pointers this array decays into a pointer and we can no longer get the size of the array
void printArray(int arr[])
{
    cout << sizeof(arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << n << " " << sizeof(arr);
    printArray(arr);
    return 0;
}