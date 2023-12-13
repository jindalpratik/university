#include <iostream>
using namespace std;

class Grandfather
{
public:
    Grandfather() { cout << "Constructor for Grandfather"; }
    void print1()
    {
        cout << "Process of Grandfather class" << endl;
    }
};

class Father : public Grandfather
{
public:
    Father() { cout << "Constructor for Father"; }
    void print2()
    {
        cout << "Process of Father class" << endl;
    }
};

class Son : public Father
{
public:
    Son() { cout << "Constructor for Son"; }
    void print3()
    {
        cout << "Process of Son class" << endl;
    }
};

int main()
{
    Son son;
    son.print1();
    son.print2();
    son.print3();
}