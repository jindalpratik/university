// Write a recursive function to calculate the number of digits in a number.

#include <iostream>

using namespace std;

int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}