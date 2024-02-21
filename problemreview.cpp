#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t; // input
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true; // boolean
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 4)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl; // output
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
