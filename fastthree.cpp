#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i]; // Assign values directly to vector elements
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int i = 1; i < v.size(); ++i)
        {
            sum += abs(v[i] + v[i - 1]);
        }
        cout << sum << endl;
    }
    return 0;
}
