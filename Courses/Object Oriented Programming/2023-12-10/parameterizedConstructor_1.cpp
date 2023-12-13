#include <iostream>
using namespace std;

class ClassA
{
public:
    ClassA() { cout << "ClassA constructor called" << endl; }
    ClassA(int x) { cout << "ClassA parameterized constructor called" << endl; }
};

class ClassB : virtual public ClassA
{
public:
    ClassB() { cout << "ClassB constructor called" << endl; }
    ClassB(int x) : ClassA(x) { cout << "ClassB parameterized constructor called" << endl; }
};

class ClassC : virtual public ClassA
{
public:
    ClassC() { cout << "ClassC constructor called" << endl; }
    ClassC(int x) : ClassA(x) { cout << "ClassC parameterized constructor called" << endl; }
};

class ClassD : public ClassB, public ClassC
{
public:
    ClassD() { cout << "ClassD constructor called" << endl; }
    ClassD(int x) : ClassB(x), ClassC(x), ClassA(x) { cout << "ClassD parameterized constructor called" << endl; }
};

int main()
{
    ClassD classd1;
    cout << endl;
    ClassD classd2(10);
}