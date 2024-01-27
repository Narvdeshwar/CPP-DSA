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
        int buy = a - b;
        int sell = a + a * 0.1;
        cout << sell - buy << endl;
    }
}
