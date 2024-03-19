#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    vector<int> gifts = {1, 1, 1, 1};
    int k = 4;
    while (k--)
    {
        sort(gifts.begin(), gifts.end());
        int num = pow(gifts[gifts.size() - 1], 1.0 / 2);
        gifts.pop_back();
        gifts.push_back(num);
    }
    int sum = accumulate(gifts.begin(), gifts.end(), 0);
    cout << sum << endl;

    return 0;
}