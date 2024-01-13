#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        string s;
        cin >> s;
        unordered_set<int> mp;
        mp.insert(X);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                X--;
                mp.insert(X);
            }
            else
            {

                X++;
                mp.insert(X);
            }
        }
        cout << mp.size() << endl;
    }
}
