#include <bits/stdc++.h>
using namespace std;
int decreaseLength(vector<int> &v)
{
    int count = 0;
    int sum = 0;
    int total = accumulate(v.begin(), v.end(), sum);
    return total;
}
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
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << decreaseLength(v) << endl;
    }
}