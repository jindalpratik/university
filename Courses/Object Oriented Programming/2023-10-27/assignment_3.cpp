/*
(use of static)
Create a class Table to print the table of a number passed
as a constructor parameter.
At the end display total no. of objects created of that class.
*/

#include <iostream>

using namespace std;

class Table
{
public:
    static int count;
    int number;
    Table(int n)
    {
        number = n;
        count++;
        for (int i = 1; i <= 10; i++)
        {
            cout << number << " x " << i << " = " << number * i << endl;
        }
    }
};

int Table::count = 0;

int main()
{
    Table t1(2);
    cout << "Number of objects: " << t1.count << endl;

    Table t2(3);
    cout << "Number of objects: " << t2.count << endl;

    Table t3(4);
    cout << "Number of objects: " << t3.count << endl;
}