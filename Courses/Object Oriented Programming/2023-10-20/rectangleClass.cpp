/*
Create a class named 'Rectangle' with two data members-
length and breadth and a function to calculate the area
which is 'length * breadth'. The class has three constructors
which are:
1- having no parameter - values of both length and breadth are
are assigned 0.
2- having two numbers as parameters - the two numbers are
assigned as length and breadth respectively.
3- having one number as parameter - both length and breadth
are assigned that number.

Create objects of the 'Rectangle' class having none, one and
two parameters and print their areas.
*/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
        cout << length * breadth << endl;
    }
    Rectangle(int length_in, int breadth_in)
    {
        length = length_in;
        breadth = breadth_in;
        cout << length * breadth << endl;
    }
    Rectangle(int length_in)
    {
        length = length_in;
        breadth = length_in;
        cout << length * breadth << endl;
    }
};

int main()
{
    Rectangle obj1;
    Rectangle obj2(10);
    Rectangle obj3(10, 20);
    return 0;
}