#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> symbals = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
string isBalanced(string s)
{
    stack<char> ch;
    for (char br : s)
    {
        if (symbals[br] < 0)
        {
            ch.push(br);
        }
        else
        {
            if (ch.empty())
                return "NO";
            char top = ch.top(); // accesing top element from the stack
            ch.pop();            // removing top element
            // checking whether top elment and current element is open and closing or not or other symbol
            if (symbals[top] + symbals[br] != 0)
            {
                return "NO";
            }
        }
    }
    if (ch.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string st;
        cin >> st;
        cout << isBalanced(st) << endl;
    }

    return 0;
}