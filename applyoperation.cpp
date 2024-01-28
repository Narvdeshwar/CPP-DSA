#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }
        vector<int> temp;
        for (auto num : nums)
        {
            if (num != 0)
            {
                temp.push_back(num);
            }
        }
        for (auto num : nums)
        {
            if (num == 0)
            {
                temp.push_back(num);
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            nums[i] = temp[i];
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    Solution sol;
    sol.applyOperations(nums);
    for (auto num : nums)
    {
        cout << num << " ";
    }
    return 0;
}