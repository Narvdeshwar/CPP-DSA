#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    regex a("(16|17|18)");
    int n;
    cin >> n;
    string s = to_string(n);
    bool ans = regex_match(s, a);
    if (ans)
    {
        cout << "ADVITIYA" << endl;
    }
    else
    {
        cout << "WAITING FOR ADVITIYA" << endl;
    }
}
