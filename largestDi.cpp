#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vt;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            cin >> vt[i][j];
        }
    }
    cout << "printing";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
}