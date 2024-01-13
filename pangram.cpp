#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    cin >> n;

    int ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int t;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == t)
        {
            ans = i;
            break;
        }
        else if (t < nums[i])
        {
            continue;
        }
        else
        {
            ans = i+1;
        }
    }
    cout << ans << endl;
}