#include <iostream>

using namespace std;

class Myclass
{
public:
    Myclass()
    {
        cout << "Constructor called" << endl;
    }
    ~Myclass()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    int x = 0;
    if (x == 0)
    {
        static Myclass obj;
    }
    cout << "End of main" << endl;
    return 0;
}
