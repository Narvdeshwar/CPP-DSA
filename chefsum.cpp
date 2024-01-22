#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> v(size);
        vector<int> presum(size + 1, 0); // Initialize presum with size + 1 elements and set all to 0

        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            v[i] = x; // Assign values to the vector v at index i
        }

        // Prefix sum
        for (int i = 0; i < size; i++)
        {
            presum[i + 1] = presum[i] + v[i];
        }

        // Suffix sum
        vector<int> suffsum(presum.rbegin(), presum.rend());

        vector<int> ans(size); // Resize ans to match the size of the input vector

        // Calculate ans
        for (int i = 0; i < size; i++)
        {
            ans[i] = presum[i] + suffsum[i];
        }

        int min_element_index = min_element(ans.begin(), ans.end()) - ans.begin();
        cout << min_element_index << endl;
    }
    return 0;
}
