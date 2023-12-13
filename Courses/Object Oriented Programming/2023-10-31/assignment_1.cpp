// Create a class called rectangle with private member
// variables length and width. Implement a constant
// member function called calculateArea() that
// calculates and returns the area of the rectangle.
// You have to call this constant function using a constant object.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int calculateArea() const
    {
        return length * width;
    }
};

int main()
{
    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    const Rectangle r1(l, w);
    cout << "Area: " << r1.calculateArea() << endl;
    return 0;
}