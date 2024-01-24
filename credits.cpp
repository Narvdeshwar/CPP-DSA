#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string ans;
        if (x < 35)
        {
            ans = "Underload";
        }
        else if (x > 65)
        {
            ans = "Overload";
        }
        else
        {
            ans = "Normal";
        }
        cout << ans << endl;
    }
}
