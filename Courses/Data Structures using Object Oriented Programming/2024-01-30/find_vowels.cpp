#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string strinput;
    cin >> strinput;
    string out = "";
    for (auto i : strinput)
    {
        if ((i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'))
        {
            out += i;
            // out.push_back(i);
        }
    }
    cout << out;
    return 0;
}