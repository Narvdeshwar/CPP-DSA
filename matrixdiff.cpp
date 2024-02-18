#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        int rowSize = grid.size();
        int colSize = grid[0].size();
        vector<vector<int>> ans(rowSize, vector<int>(colSize, 0));
        vector<int> rowZeroCount(rowSize, 0);
        vector<int> rowOneCount(rowSize, 0);
        vector<int> colZeroCount(colSize, 0);
        vector<int> colOneCount(colSize, 0);

        // Row zeros and ones count
        for (int i = 0; i < rowSize; i++)
        {
            int zeros = 0, ones = 0;
            for (int j = 0; j < colSize; j++)
            {
                if (grid[i][j] == 0)
                    zeros++;
                else
                    ones++;
            }
            rowZeroCount[i] = zeros;
            rowOneCount[i] = ones;
        }

        // Column zeros and ones count
        for (int j = 0; j < colSize; j++)
        {
            int zeros = 0, ones = 0;
            for (int i = 0; i < rowSize; i++)
            {
                if (grid[i][j] == 0)
                    zeros++;
                else
                    ones++;
            }
            colZeroCount[j] = zeros;
            colOneCount[j] = ones;
        }

        // Logic diff
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < colSize; j++)
            {
                ans[i][j] = rowOneCount[i] + colOneCount[j] - rowZeroCount[i] - colZeroCount[j];
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> grid = {{0, 1, 1}, {1, 0, 1}, {0, 0, 1}};
    Solution sol;
    vector<vector<int>> result = sol.onesMinusZeros(grid);

    for (const auto &row : result)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
