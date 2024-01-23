#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int Z, Y, A, B, C;
        cin >> Z >> Y >> A >> B >> C;
        string ans = ((Z - Y) >= (A + B + C)) ? "YES" : "NO";
        cout << ans << endl;
    }
}
