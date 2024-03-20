#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minStoneSum(std::vector<int> &piles, int k)
    {
        std::priority_queue<int> pq(piles.begin(), piles.end());

        while (k--)
        {
            int stone = pq.top();
            pq.pop();
            stone = std::ceil(stone / 2.0);
            pq.push(stone);
        }

        int sum = 0;
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};