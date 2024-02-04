#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int t = nums.size();
        k=k%nums.size();
        for (int i = 0; i < k; i++)
        {
            int n = nums[t - 1];
            nums.pop_back();
            nums.insert(nums.begin(), n);
        }
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution sol;
    sol.rotate(nums, k);
}