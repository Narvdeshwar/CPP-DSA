#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    string ans;
    if (n < 8)
    {
        ans = "LESS";
    }
    else if (n == 8)
    {
        ans = "PERFECT";
    }
    else
    {
        ans = "MORE";
    }
    cout << ans << endl;
}
