/*
Create two classes numbers and table. Pass the
user entered number in Number class constructor
and print its table through a member function
showTable() of class Table using friend class?
*/

#include <iostream>
using namespace std;

class Table
{
public:
    int num;
    Table(int n)
    {
        num = n;
    }
    void showTable()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
    };
};

class Number
{
public:
    int num;
    Number(int n)
    {
        num = n;
    }
    friend void Table::showTable();
};


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Number n1(n);
    Table t1(n);
    t1.showTable();
    return 0;
}