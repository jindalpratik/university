/*
Suppose you have a piggy bank with an intial amount of $50 and you have
to add some more amount to it. Create a class 'AddAmount' with a data 
member named 'amount' with an initial value of $50.

Make two constructors of thsi class as follows:
1- without any parameter - no amount will be added
to the Piggie Bank.
2- having a parameter which is the amount that will
be added to the piggie bank

Create an object of the 'addAmount' class and display
the final amount int the Piggie Bank.
*/

#include <iostream>

using namespace std;

class AddAmount {
    private:
        int amount = 50;
    public:
        AddAmount(int amount_in = 0) {
            amount += amount_in;
            cout << amount << endl;
        }
};

int main() {
    AddAmount obj1;
    AddAmount obj2(100);
    return 0;
}