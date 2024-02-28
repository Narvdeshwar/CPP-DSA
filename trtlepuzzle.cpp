#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // when x is negative
            if (x < 0)
            {
                sum += -(x);
            }
            // when x is positive
            else
            {
                sum += x;
            }
        }
        cout << sum << endl;
    }
}