#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<int> v;
        for (auto num : nums)
        {
            mp[num]++;
        }

        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if (it->second == 1)
            {
                v.push_back(it->first);
            }
        }

        return v;
    }
};

int main()
{
    // Example usage:
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    Solution sol;
    vector<int> v = sol.singleNumber(nums);
    for (auto it : v)
    {
        cout << it << endl;
    }
    return 0;
}
