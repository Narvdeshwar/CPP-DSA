#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool palindrome(string s)
    {
        string result = s;                     // Make a copy of s to store the reversed string
        reverse(result.begin(), result.end()); // Reverse the copied string
        return s == result;                    // Check if the original string is equal to the reversed string
    }
    string firstPalindrome(vector<string> &words)
    {
        for (auto s : words)
        {
            if (palindrome(s))
            {
                return s;
            }
        }
        return "";
    }
};
int main()
{
    Solution sol;
    vector<string> s = {"abc", "car", "ada", "racecar", "cool"};
    cout<<sol.firstPalindrome(s);
}