#include <iostream>
using namespace std;

class Employee
{
public:
    string name, ecode;
    Employee(string nm, string ec)
    {
        name = nm;
        ecode = ec;
        cout << "Employee name: " << name << endl;
        cout << "Employee ecode: " << ecode << endl;
    }

    void editinfo(Employee obj, string nm, string ec)
    {
        obj.name = nm;
        obj.ecode = ec;
        cout << "Inside function obj.name:" << obj.name << endl;
        cout << "Inside function obj.ecode:" << obj.ecode << endl;
    }
};

int main()
{
    string nm, ec;
    Employee e1("John", "123");
    cout << "Enter new name: ";
    cin >> nm;
    cout << "Enter new ecode: ";
    cin >> ec;
    e1.editinfo(e1, nm, ec);
    cout << "Outside function e1.name:" << e1.name << endl;
    cout << "Outside function e1.ecode:" << e1.ecode << endl;
    return 0;
}