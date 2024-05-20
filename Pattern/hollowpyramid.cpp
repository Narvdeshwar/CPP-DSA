#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    int n = 6;
    for (int row = 0; row < n; row++)
    {
        int totalColumn = n + 1;
        for (int col = 0; col < totalColumn; col++)
        {
            if (row == 0 || row == n - 1 || row == 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalColumn - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}