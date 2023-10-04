// Create a do sum function but with integer inputs and float inputs

#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

float sum(float a, float b){
    return a + b;
}


int main(){
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    cout << "Sum of " << a << " and " << b << " is " << sum(a,b) << endl;
    cout << "Sum of " << c << " and " << d << " is " << sum(c,d) << endl;
    return 0;
}