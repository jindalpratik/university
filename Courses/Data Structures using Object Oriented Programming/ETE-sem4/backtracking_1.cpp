#include<iostream>
#include<vector>
using namespace std;

vector<int> permutation;
vector<int> v = {0,1,2};
int n = v.size();
vector<int> choosen(n,0);

void print_vec()
{
    for(auto i: permutation)
    {
        cout << i << " ";
    }
    cout << endl;
}

void generate_permutation()
{
    if(permutation.size() == n)
    {
        print_vec();
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(choosen[i]) continue;
            permutation.push_back(v[i]);
            choosen[i] = 1;
            generate_permutation();
            choosen[i] = 0;
            permutation.pop_back();
        }
    }
}

// Generating all possible permutations of a number
int main()
{
    generate_permutation();
}