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
    int tabels;
    cout << "Enter the number of tables you want to print: ";
    cin >> tabels;
    for (int i = 0; i < tabels; i++)
    {
        int number;
        cout << "Enter the number of which you want to print the table: ";
        cin >> number;
        Table t1(number);
        cout << "Number of objects: " << t1.count << endl;
    }
}