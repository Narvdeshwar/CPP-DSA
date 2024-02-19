#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int getLastDigit(char ch) { return ch - '0'; }
    int countSpace(string &str)
    {
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
            {
                count++;
            }
        }
        return count;
    }
    string sortSentence(string s)
    {
        int space = countSpace(s);
        vector<string> v(space + 1);
        string temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                int pos = getLastDigit(temp.back());
                temp.pop_back();
                v[pos - 1] = temp;
                temp.clear();
            }
            else
            {
                temp += s[i];
            }
        }
        if (!temp.empty())
        {
            int pos = getLastDigit(temp.back());
            temp.pop_back();
            v[pos - 1] = temp;
        }
        string ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (i == v.size() - 1)
            {
                ans += v[i];
            }
            else
            {
                ans += v[i] + " ";
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    string sentence = "is2 sentence4 This1 a3";
    string sortedSentence = sol.sortSentence(sentence);
    cout << "Original Sentence: " << sentence << endl;
    cout << "Sorted Sentence: " << sortedSentence << endl;
    return 0;
}
