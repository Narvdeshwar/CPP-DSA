#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        int count = 0;
        bool flag = false;
        for (int i = 0; i < word.size(); i++)
        {
            if (!isVowel(word[i]))
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count >= 4)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}