#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        if ((X + Y) % 2 == 0)
        {
            cout << "Janmansh" << endl;
        }
        else
        {
            cout << "Jay" << endl;
        }
    }
}
