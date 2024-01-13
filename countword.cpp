#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<char, int>> vt;
    string s = "wwwbbww";
    int i = 0, j = 0;
    int count = 0;
    char ch;
    while (i < s.size())
    {
        ch = s[i];
        if (s[i] == s[j])
        {
            count++;
            j++;
        }
        if (s[i] != s[j])
        {
            j++;
            i = j;
        }
    }
}