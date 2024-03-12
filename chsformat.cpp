#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans;
        if (a + b < 3)
        {
            ans = 1;
        }
        else if (a + b >= 3 && a + b <= 10)
        {
            ans = 2;
        }
        else if (a + b >= 11 && a + b <= 60)
        {
            ans = 3;
        }
        else
        {
            ans = 4;
        }
        cout << ans << endl;
    }
}
