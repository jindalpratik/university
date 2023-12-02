#include <iostream>
using namespace std;

class Employee {
    public:
    int ecode;
    string ename;
    double esalary;

    Employee(int ec, string nm, double sal) {
        ecode = ec;
        ename = nm;
        esalary = sal;
    }

    Employee(Employee& e) {
        ecode = e.ecode;
        ename = e.ename;
        esalary = e.esalary;
    }

    void display();
};

void Employee::display()
{
    cout << ecode << "\t" << ename << "\t" << esalary << endl;
}

int main()
{
    Employee emp1(5001, "Ram", 85000);
    emp1.display();
    Employee emp2(emp1);
    emp2.display();
}
