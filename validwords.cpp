#include <bits/stdc++.h>
using namespace std;
/**
 * It only contains lowercase letters, hyphens, and/or punctuation (no digits).
* There is at most one hyphen '-'. If present, it must be surrounded by lowercase characters ("a-b" is valid, but "-ab" and "ab-" are not valid).
* There is at most one punctuation mark. If present, it must be at the end of the token ("ab,", "cd!", and "." are valid, but "a!b" and "c.," are not valid).
 * 
 */

/**
 * condition 1. [a-z]
 * condition 2. [a-z]+\-[a-z]+
 * condition 3. 
 * 
 */
class Solution
{
public:
    int countValidWords(string sentence)
    {
    }
};
int main()
{
    Solution sol;
    string s = "cat and  dog";
    sol.countValidWords(s);
}