#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string ans = "";
        string firstWord = strs[0];

        string lastWord = strs[strs.size() - 1];
        // cout << "firstWord " << firstWord << endl;
        // cout << "secondWord " << lastWord << endl;
        for (int i = 0; i < min(firstWord.size(), lastWord.size()); i++)
        {
            cout << firstWord[i] << " " << lastWord[i] << endl;
            if (firstWord[i] != lastWord[i])
            {
                return ans;
            }
            ans += firstWord[i];
        }
        return ans;
    }
};
int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    Solution sol;
    cout << sol.longestCommonPrefix(str);
    return 0;
}