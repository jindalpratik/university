#include <iostream>
using namespace std;

int main()
{
    int marks[100] = {-1};

    int n;
    cout << "Enter the no of students";
    cin >> n;

    // input
    for (int i = 0; i <= n; i++)
    {
        cin >> marks[i];
        marks[i] = marks[i] * 2;
    }

    for (int i = 0; i < 100; i++)
    {

        cout << marks[i] << " ,";
    }

    cout << endl;

    return 0;
}