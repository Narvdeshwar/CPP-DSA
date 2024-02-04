#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        int count = 0;
        for (int i = 0; i < cards.size(); i++)
        {
            int val = cards[i];
            cout << cards[i] << " " << cards[val] << " " << (cards[i] == cards[val]);
            if (cards[i] == cards[val] && i != val)
            {
                cout << "if conditon chala" << endl;
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution sol;
    vector<int> v = {3, 4, 2, 3, 4, 7};
    cout << sol.minimumCardPickup(v);
}
// cards[i] represents the value of the ith card. A pair of cards are matching if the cards have the same value.
// output => [3,4,2,3]
/**
 * [3,4,2,3,4,7]
 * [0,1,2,3,4,5]
 * cards[0]=>3, cards[3] =>3 true
 * cards[1]=>4, cards[4]=>4 true
 * cards[2]=>2, cards[2]=>2 true
 * cards[3]=>3, cards[3]=>3 true
 * cards[4]=>4, cards[4]=>4 true
 * cards[5]=>7, cards[7]=>X index out of bound
 */