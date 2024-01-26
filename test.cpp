#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {

        set<int> s(nums.begin(), nums.end());
        int ecount = 0;
        for (int i : s)
        {
            cout << i << ' ';
            int a = count(nums.begin(), nums.end(), i);
            ecount = ecount + (a * (a - 1) / 2);
        }

        return ecount;
    }
};

int main()
{
    Solution sol;
    vector<int> v = {1, 1, 1, 3};
    cout << sol.numIdenticalPairs(v);
    return 0;
}