/*
Create three classes by name Day, Month and Year to
store the day of the month, month in two digits and year
in four digits respectively, from the user.

Now print the entire data as "DD/MM/YYYY" format.
*/

#include <iostream>

using namespace std;

class Day {
public:
    int day;
    Day(){
        cout << "Enter day: ";
        cin >> day;
    }
};

class Month {
public:
    int month;
    Month(){
        cout << "Enter month: ";
        cin >> month;
    }
};

class Year {
public:
    int year;
    Year(){
        cout << "Enter year: ";
        cin >> year;
    }
};

int main(){
    Day d;
    Month m;
    Year y;

    cout << "Date: " << d.day << "/" << m.month << "/" << y.year << endl;
}
