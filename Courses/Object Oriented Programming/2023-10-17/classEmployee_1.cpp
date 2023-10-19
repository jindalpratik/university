#include<iostream>
#include<string>
using namespace std;

class Employee
{      
    public:
    string name;
    string ecode;
    int age;  
};

int main(){
    Employee e1;
    e1.name = "Ramesh";
    e1.ecode = "e001";
    e1.age = 34;

    cout << "Name: " << e1.name << endl;
    cout << "Employee Code: " << e1.ecode << endl;
    cout << "Age: " << e1.age << endl;

    Employee e2;
    e2.name = "Lokesh";
    e2.ecode = "e002";
    e2.age = 28;

    cout << "Name: " << e2.name << endl;
    cout << "Employee Code: " << e2.ecode << endl;
    cout << "Age: " << e2.age << endl;
}