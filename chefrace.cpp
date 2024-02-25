#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;
        int count = 0;
        if (X != A && X != B)
            count++;
        if (Y != A && Y != B)
            count++;
        cout << count << endl;
    }
}
