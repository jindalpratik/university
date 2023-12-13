#include <iostream>
using namespace std;

class Count
{
public:
    double number;

    Count(double nm)
    {
        number = nm;
    }

    void operator-()
    {
        if (number == 0)
        {
            number = number;
        }
        else
        {
            number = -number;
        }
    }

    void display()
    {
        cout << number << endl;
    }
};

int main()
{
    double nm = 5;
    Count cn1(nm);

    -cn1;
    cn1.display();
}