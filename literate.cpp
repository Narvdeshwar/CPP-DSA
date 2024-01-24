#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float P, L;
        cin >> P >> L;
        // cout<<P<<L;
        float ans = (L / P) * 100;
        // cout<<ans<<endl;
        string result = (ans >= 75) ? "YES" : "NO";
        cout << result << endl;
    }
}
