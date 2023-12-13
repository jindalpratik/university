// Create a class addition and add two numbers using constructors

#include <iostream>

using namespace std;

class addition
{
private:
    int a, b;

public:
    addition(int x, int y)
    {
        a = x;
        b = y;
    }
    int add()
    {
        return a + b;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    addition obj(a, b);
    cout << obj.add() << endl;
    return 0;
}