#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, xr, xy, D;
        cin >> x >> y >> xr >> xy >> D;
        float xrr = x / xr;
        float xyy = y / xy;
        int ans = min(xrr, xyy);
        if (ans >= D)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
