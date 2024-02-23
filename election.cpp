#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string ans;
        if (a > 50)
        {
            ans = "A";
        }
        else if (b > 50)
        {
            ans = "B";
        }
        else if (c > 50)
        {
            ans = "C";
        }
        else
        {
            ans = "NOTA";
        }
        cout << ans << endl;
    }
}
