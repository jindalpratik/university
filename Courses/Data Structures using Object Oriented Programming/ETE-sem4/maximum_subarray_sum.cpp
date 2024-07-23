#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {3,4,5,-2,6,-9,-5,-10,-25,5,5,8,7};
    int sum = 0;
    int best = 0;
    for(auto &i: v)
    {
        sum = max(i, sum+i);
        best = max(best,sum);
    }
    cout << best;
}