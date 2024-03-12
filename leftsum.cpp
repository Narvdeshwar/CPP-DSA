#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1};
    vector<int> leftSum = {0};
    vector<int> rightSum = {0};
    int sumL = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        sumL += nums[i];
        leftSum.push_back(sumL);
    }
    int sumR = 0;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        // cout << nums[i] << endl;
        sumR += nums[i];
        rightSum.push_back(sumR);
    }
    reverse(rightSum.begin(), rightSum.end());
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(abs(leftSum[i] - rightSum[i]));
    }
    for (auto &a : ans)
    {
        cout << a << " ";
    }
}