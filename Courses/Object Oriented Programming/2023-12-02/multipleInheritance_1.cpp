#include <iostream>
using namespace std;

class ClassX
{
public:
    ClassX() { cout << "ClassX constructor called" << endl; }
    ~ClassX() { cout << "ClassX Destructor called" << endl; }
};

class ClassY
{
public:
    ClassY() { cout << "ClassY constructor called" << endl; }
    ~ClassY() { cout << "ClassY Destructor called" << endl; }
};

class ClassZ : public ClassY, public ClassX
{
public:
    ClassZ() { cout << "ClassZ constructor called" << endl; }
    ~ClassZ() { cout << "ClassZ Destructor called" << endl; }
};

int main()
{
    ClassZ obz;
}
