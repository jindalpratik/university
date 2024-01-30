#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    sort(inp.begin(), inp.end());
    string out;
    for (int i; i < inp.length(); i++)
    {
        if (inp[i] != inp[i + 1])
        {
            out.push_back(inp[i]);
        }
    }
    cout << out;
    return 0;
}