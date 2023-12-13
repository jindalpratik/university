#include <iostream>
using namespace std;

int main()
{
#define SQUARE(x) x *x
    int y = 4;
    cout << SQUARE(y + 1);
    // int x = 5;
    // int y = 10;
    // if (x > y)
    //     cout << "x is greater";
    // cout << "y is greater";
}
