#include <iostream>
using namespace std;

class Increment
{
private:
    int number;

public:
    Increment(int nm)
    {
        number = nm;
    }

    void operator++()
    {
        number = number + 2;
    }

    void operator++(int)
    {
        number = number + 3;
    }

    void display()
    {
        cout << "Count: " << number << endl;
    }
};

int main()
{
    int num;
    cin >> num;
    Increment inc1(num);

    ++inc1;
    inc1.display();
    inc1++;
    inc1.display();

    return 0;
}