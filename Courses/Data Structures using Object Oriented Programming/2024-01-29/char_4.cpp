#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string inputStr;
    cin >> inputStr;
    int len = inputStr.size();
    bool flag = true;
    for (int i; i < len; i++)
    {
        if (inputStr[i] != inputStr[len - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Is palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }
    return 0;
}