#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    char ch;
    cin >> ch;
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        string s = str[i];
        int n = s.length();
        for (int j = 0; j < n; j++)
        {
            if (s[j] == ch)
            {
                ans.push_back(i);
                break;
            }
        }
    }
    for (auto a : ans)
    {
        cout << a << endl;
    }
}