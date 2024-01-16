// Given a sorted array and a number x, find a pair in array whose sum is closest to x.
// Input Format: In the function an integer vector and number x is passed.
// Output Format: Return the pair of numbers whose sum is closest to x.

// Sample Input
// {10,22,28,29,30,40} x = 54
// Sample Output
// 22,30

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> solvedPairSum(vector<int> arr, int x)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    int diff = INT_MAX;
    vector<int> ans;
    while (l < r)
    {
        if (abs(arr[l] + arr[r] - x) < diff)
        {
            diff = abs(arr[l] + arr[r] - x);
            ans.clear();
            ans.push_back(arr[l]);
            ans.push_back(arr[r]);
        }
        if (arr[l] + arr[r] > x)
            r--;
        else
            l++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    vector<int> ans = solvedPairSum(arr, x);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}