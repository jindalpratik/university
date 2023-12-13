#include <iostream>
using namespace std;

class Employee
{
public:
    string ename, ecode;

    Employee()
    {
        cout << "Information not available" << endl;
    }

    Employee(string name)
    {
        ename = name;
        cout << "name of emp2 " << ename << endl;
    }

    Employee(string name, string code)
    {
        ename = name;
        ecode = code;
        cout << "name of emp3 " << ename << endl;
        cout << "code of emp3 " << ecode << endl;
    }
};

int main()
{
    Employee emp1;
    Employee emp2("Ramesh");
    Employee emp3("Alok", "emp007");
    return 0;
}