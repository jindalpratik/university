// To print all armstrong number between 100-999

#include <iostream>
using namespace std;
bool armstrong(int number)
{
    int temp = number;
    int sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if (sum == number)
    {
        cout << number << " is an armstrong number" << endl;
        return true;
    }
    return false;
}

int main()
{
    bool bool_arm;
    int count = 0;
    for (int i = 100; i <= 999; i++)
    {
        bool_arm = armstrong(i);
        if (bool_arm)
        {
            count += 1;
        }
    }
    cout << "Total number of armstrong number found: " << count << endl;
    return 0;
}
