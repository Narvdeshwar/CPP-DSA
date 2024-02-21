#include <bits/stdc++.h>
using namespace std;
vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
class Solution
{
public:
    int indexOfKey(string key, char m)
    {
        for (int i = 0; i < key.size(); i++)
        {
            if (m == key[i])
                return i;
        }
        return 0;
    }
    string decodeMessage(string key, string message)
    {
        string removedSpacesKey;
        for (int i = 0; i < key.size(); i++)
        {
            if (key[i] == ' ')
                continue;
            else
                removedSpacesKey += key[i];
        }
        string ans;
        for (int i = 0; i < message.size(); i++)
        {
            if (message[i] == ' ')
            {
            }
            else
            {
                cout << message[i] << " " << indexOfKey(removedSpacesKey, message[i]) << " " << v[indexOfKey(removedSpacesKey, message[i])]<<" "<<endl;
            }
        }
        return ans;
    }
};
int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    Solution sol;
    cout << sol.decodeMessage(key, message);
}