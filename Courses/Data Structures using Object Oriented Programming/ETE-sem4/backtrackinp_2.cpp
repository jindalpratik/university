#include<iostream>
#include<vector>
using namespace std;

vector<int> rr = {0,1};
vector<int> cr = {1,0};
int best = 9999999;
int sum = 0;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size(); 
        sum = grid[0][0];
        calculate_max(0,0,m,n,grid);

        return best;
    }

private:
    void calculate_max(int row ,int col, int m, int n, vector<vector<int>>& grid)
    {
        if(row == m-1 && col == m-1)
        {
            best = min(best, sum);
        }
        else{
            for(int i = 0; i<2;i++)
            {
                int new_row = row + rr[i];
                int new_col = col + cr[i];
                if(new_row < m && new_col <n)
                {
                    cout << new_row << " " << new_col;
                    sum += grid[new_row][new_col];
                    calculate_max(new_row,new_col,m,n,grid);
                }
            }
        }
    }
};

int main()
{}