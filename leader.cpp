#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T; // Number of test cases
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n % 4 == 0)
        {
            bool ans = false;
            for (int i = 0; i < n; i = +4)
            {
                if (v[i] + v[i + 1] != v[i + 2] + v[i + 3])
                {
                    ans = true;
                }
            }
            if (ans)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }exit
    

    return 0;
}
