#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        int totalColumn = row+ 1;
        for (int col = 0; col < totalColumn; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || row == col)
            {
                cout << "*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}