#include <iostream>
using namespace std;

#define SQUARE(x) x *x
int main()
{
    int y = 4;
    cout << SQUARE(y + 1);
    return 0;
}
