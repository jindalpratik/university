/*
Create two classes Length and Width with two private
members (integers) length and width, respectively.
You have to pass numbers in the respective classes for
length and width through their constructors.
Now create a friend function area() to calculate the area
of rectangle?
*/

#include <iostream>
using namespace std;

class Width;
class Length
{
private:
    int length;

public:
    Length(int l)
    {
        length = l;
    }
    friend void area(Length &l1, Width &w1);
};

class Width
{
private:
    int width;

public:
    Width(int w)
    {
        width = w;
    }
    friend void area(Length &l1, Width &w1);
};

void area(Length &l1, Width &w1)
{
    cout << "Area: " << l1.length * w1.width << endl;
}

int main()
{
    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    Length l1(l);
    Width w1(w);
    area(l1, w1);
    return 0;
}