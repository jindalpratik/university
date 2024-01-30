#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string out;
    for (int i = 0; i < str.length(); i++)
    {
        int n = 1;
        while (str[i] == str[i + 1])
        {
            n += 1;
            i += 1;
        }
        out.push_back(str[i]);
        if (n > 1)
        {
            out += to_string(n);
        }
    }
    cout << out;
}
