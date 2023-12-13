#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string ecode;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Employee Code: " << ecode << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Employee e1;
    e1.name = "Deepak";
    e1.ecode = "cu001";
    e1.age = 19;

    e1.display();

    Employee e2;
    e2.name = "Gopal";
    e2.ecode = "cu002";
    e2.age = 20;

    e2.display();

    return 0;
}