/*
Create a class called "BankAccount" and initialize it with a balance
(must be private) with 2000.
Now create two member functions called "deposit" and "withdraw" to
withdraw and deposit the amount, respectively. These function should
accept the amount as a parameter.
Create another member function called "showBalance()" to display the
balance after every withdray and deposit transactions.
*/

#include <iostream>

using namespace std;

class BankAccount
{
private:
    int balance = 2000;

public:
    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposited " << amount << " rupees" << endl;
        showBalance();
    }
    void withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << " rupees" << endl;
            showBalance();
        }
        else
        {
            cout << "Insufficient balance" << endl;
            showBalance();
        }
    }
    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    b.showBalance();
    b.deposit(1000);
    b.withdraw(500);
    b.withdraw(5000);
    b.deposit(5000);
    b.withdraw(500);
    b.withdraw(500);
    b.withdraw(500);
    b.withdraw(500);
    return 0;
}