#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sum;
    int len = str.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            sum += pow(2, len - i - 1);
        }
    }
    cout << sum;
    return 0;
}