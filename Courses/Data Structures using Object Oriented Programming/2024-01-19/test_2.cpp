/*
LEFT_SMALLEST

Problem Statement:
Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

Input:
The first line of input contains T test cases.

The first line of each test case contains the number of elements in the array.

The second line of each test case contains the elements of the array.

Output:
Print the n elements.

Constraints:
1<=T<=100

1<=N<=100

0<=A[i]<10000

Time Limit:
1 sec

Example 1:
Input
2
3
1 6 2
6
1 5 0 3 4 5

Output
-1 1 1
-1 1 -1 0 3 4 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> ans(n);
        ans[0] = -1;
        for(int i = 1; i < n; i++) {
            int j = i - 1;
            while(j >= 0 && v[j] >= v[i]) {
                j--;
            }
            if(j < 0) {
                ans[i] = -1;
            } else {
                ans[i] = v[j];
            }
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
