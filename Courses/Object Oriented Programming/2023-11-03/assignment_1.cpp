#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < ((num / 2) + 1); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int length;
    cin >> length;

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < length - 2; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (j - i == 1)
            {
                continue;
            }
            else if (isPrime(j - i))
            {
                // cout << arr[j] - arr[i] << ";" << i << j << endl;
                sum += arr[j] - arr[i];
            }
        }
    }

    cout << sum << endl;

    return 0;
}