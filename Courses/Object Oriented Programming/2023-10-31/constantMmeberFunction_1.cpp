#include<iostream>
using namespace std;

class MyClass
{
public:
    int A;
    void normalFunc()
    {
        cout << "Cannot accessed by constant object" << endl;

    }

    void fun() const{
        cout << "Value of A: " << A << endl;
    }
};

int main()
{
    MyClass obj;
    obj.A = 10;
    obj.fun();
    obj.normalFunc();

    // const MyClass obj2;
    // obj2.A = 20;
    // obj2.fun();
    // obj2.normalFunc();

    return 0;
}