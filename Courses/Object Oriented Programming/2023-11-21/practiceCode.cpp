#include<iostream>
using namespace std;

class Count{
    private:
    double value;

    public:

    // Constructor to initialize value
    Count(double n) {value = n;}

    // Operator function for when used as a prefix
    Count operator - () {
        if(value == 0)
            value = value;
        else if(value < 0)
            value = -value;
        else
            value = -value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    double num;
    cout << "Enter any number: ";
    cin >> num;

    Count count1(num);
    -count1; //negates the value

    count1.display();
    return 0;
}
