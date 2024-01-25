#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        if (words.size() != s.size())
        {
            return false;
        }
        if (words.size() == s.size())
        {
            for (int i = 0; i < words.size(); i++)
            {
                string temp = words[i];
                if (temp[0] != s[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    Solution sol;
    vector<string> str = {"alice", "bob", "charlie"};
    string s = "abc";
    cout << sol.isAcronym(str, s);
    return 0;
}