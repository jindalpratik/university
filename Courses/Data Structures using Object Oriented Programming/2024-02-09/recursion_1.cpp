// Find all occurences of an itemin an array and store it in an array using recursion

#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0) {
        return 0;
    }
    int ans = allIndexes(input + 1, size - 1, x, output);
    if(input[0] == x) {
        for(int i = ans - 1; i >= 0; i--) {
            output[i + 1] = output[i] + 1;
        }
        output[0] = 0;
        ans++;
    } else {
        for(int i = ans - 1; i >= 0; i--) {
            output[i] = output[i] + 1;
        }
    }
    return ans;
}

int main() {
    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 7};
    int size = sizeof(input) / sizeof(input[0]);
    int x = 7;
    int output[100];
    int ans = allIndexes(input, size, x, output);
    for(int i = 0; i < ans; i++) {
        cout << output[i] << " ";
    }
    cout << endl;
    return 0;
}