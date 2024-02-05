#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int b = 0;
        for (int i = 0; i < d; i++)
        {
            if (s[i] == '5' || s[i] == '0')
            {
                ++b;
            }
        }
        cout << (b > 0 ? "YES" : "NO") << endl;
    }
}
