#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    map<string, int> m;
    
    int n;
    cin >> n;
    while (n > 0)
    {
        string s;
        cin >> s;
        m[s]++;
        n--;
    }
    cout << "counting of string" << endl;
    for (auto s : m)
    {
        cout << s.first << " " << s.second << endl;
    }
}