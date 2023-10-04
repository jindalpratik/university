#include<iostream>
using namespace std;

void printt(int number){
    for(int i = 1;i<=10;i++){
        cout << number << "x" << i << "=" << number * i << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    printt(num);
    return 0;
}