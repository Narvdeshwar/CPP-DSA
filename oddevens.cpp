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
        string ans = (a + b) % 2 == 0 ? "Bob" : "Alice";
        cout << ans << endl;
    }
}
