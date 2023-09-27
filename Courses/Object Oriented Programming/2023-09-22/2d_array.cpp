#include<iostream>
using namespace std;
int main(){

    int m;
    int n;
    cout << "Then the 2D size of array\n" << endl;
    cin >> m >> n;
    int arr[m][n];

    cout << "Enter the Elements\n " << endl;

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The values inside array are\n" << endl;

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}