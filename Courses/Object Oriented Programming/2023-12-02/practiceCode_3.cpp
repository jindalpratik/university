#include <iostream>
using namespace std;

class Multiply {
    public:
    double number, result;

    Multiply (double nm) {
        number = nm;
    }

    void operator / (const Multiply& obj) {
        result = number * obj.number;
    }

    void showResult() {
        cout << result << endl;
    }
};

int main() {
    double num = 5;

    Multiply mp1(5), mp2(5);

    mp1/mp2;

    mp1.showResult();

    return 0;
}