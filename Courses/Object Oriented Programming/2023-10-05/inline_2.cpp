// Write an inline function that calculates the cube of a number.

#include<iostream>
using namespace std;

inline int cube(int a){
    return a*a*a;
}

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Cube of " << a << " is " << cube(a) << endl;
    return 0;
}