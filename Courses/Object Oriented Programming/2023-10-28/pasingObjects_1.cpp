#include<iostream>
using namespace std;

class Student {
    public:
    double marks;

    Student(double m){
        marks = m;
    }
};

void calculateAverage(Student s1, Student s2){
    double average = (s1.marks + s2.marks) / 2;
    cout << "Average: " << average << endl;
}

int main(){
    Student s1(90);
    Student s2(80);
    calculateAverage(s1, s2);
    return 0;
}