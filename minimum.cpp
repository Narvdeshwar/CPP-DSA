#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2, 11, 10, 1, 3};
    sort(nums.begin(), nums.end());
    int k = 10;
    int count = 0;
    for (auto &n : nums)
    {
        if (n >= k)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}