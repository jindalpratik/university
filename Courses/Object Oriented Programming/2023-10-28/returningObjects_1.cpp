#include <iostream>
using namespace std;

class Student
{
public:
    double marks, average;
};

Student claculateAverage(Student s1, Student s2)
{
    Student result;
    result.average = (s1.marks + s2.marks) / 2;
    return result;
}

int main()
{
    Student s1, s2, avg;
    s1.marks = 90;
    s2.marks = 80;
    avg = claculateAverage(s1, s2);
    cout << "Average: " << avg.average << endl;
    return 0;
}