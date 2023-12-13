#include <iostream>
using namespace std;

int Division(int x, int y)
{

    return x / y;
}

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            throw "Division by zero";
        c = Division(a, b);
        cout << c << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
}
