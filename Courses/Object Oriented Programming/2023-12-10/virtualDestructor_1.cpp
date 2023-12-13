#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Constructor for Base" << endl; }
    virtual ~Base() { cout << "Destructor for Base" << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Constructor for Derived" << endl; }
    ~Derived() { cout << "Destructor for Derived" << endl; }
};

int main()
{
    Base *b = new Derived();
    delete b;
}