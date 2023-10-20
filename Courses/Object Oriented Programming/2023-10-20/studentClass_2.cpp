/*
Write a programme to print the names of students by creating a Student class. 
If no name is passed while creating an object is passed of student class, 
then the name should be "Unknown", otherwise the name should be equal to the 
String value passed while creating the object of the student class.
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
    public:
        // Student() {
        //     name = "Unknown";
        //     cout << name << endl;
        // }
        Student(string name_in = "Unknown") {
            name = name_in;
            cout << name << endl;
        }
};

int main() {
    Student obj1;
    Student obj2("John");
    return 0;
}