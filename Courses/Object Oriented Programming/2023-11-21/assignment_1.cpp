/*
 Q17 (Operator overloading)
 Create a class "Multiply" and overload the binary division
 operator to perform multiplication of two number.

 Example:
 5/2 = 10
 25/0 = 0
 7/3 = 21
*/

#include<iostream>
using namespace std;

class Multiply{
    private:
    double value;

    public:

    // Constructor to initialize value
    Multiply(double n) {value = n;}

    // Operator function for when used as a prefix
    Multiply operator / (Multiply &obj) {
        Multiply result(0);
        result.value = value * obj.value;
        return result;
    }

    void display() {
        cout << "Result: " << value << endl;
    }
};

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Multiply multiply1(num1);
    Multiply multiply2(num2);

    Multiply result = multiply1 / multiply2;

    result.display();
    return 0;
}