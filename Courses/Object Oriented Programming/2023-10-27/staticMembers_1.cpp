#include<iostream>

using namespace std;

class Employee {
public:
    static int count;
    Employee(){
        count++;
    }
};

int Employee::count = 0;

int main(){
    Employee e1;
    cout << "Number of employees: " << e1.count << endl;

    Employee e2;
    cout << "Number of employees: " << e2.count << endl;

    Employee e3;
    cout << "Number of employees: " << e3.count << endl;
}