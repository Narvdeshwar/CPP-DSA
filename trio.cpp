#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int A = b + c;
        int B = a + c;
        int C = a + b;
        if (a == A)
        {
            cout << "YES" << endl;
        }
        else if (B == b)
        {
            cout << "YES" << endl;
        }
        else if (C == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
