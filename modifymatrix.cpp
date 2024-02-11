#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void modifiedMatrix(vector<vector<int>> &matrix)
    {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        vector<vector<int>> ans(rowSize, vector<int>(colSize, 0)); // Initialize ans with correct size

        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < colSize; j++)
            {
                if (matrix[i][j] == -1)
                {
                    int maxElement = 0;
                    for (int k = 0; k < rowSize; k++)
                    { // Fixed loop condition
                        maxElement = max(maxElement, matrix[k][j]);
                    }
                    ans[i][j] = maxElement;
                }
                else
                {
                    ans[i][j] = matrix[i][j];
                }
            }
        }

        // Output the modified matrix
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = 0; j < colSize; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{3, -1}, {5, 2}};
    Solution sol;
    sol.modifiedMatrix(matrix);
    return 0;
}
