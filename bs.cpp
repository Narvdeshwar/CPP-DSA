#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int low = 0, high = v.size() - 1;
    int find_element = -1;
    int mid;
    while (high - low > 1)
    {
        if (v[mid] < find_element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        mid = (high + low) / 2;
    }
    if (v[low] == find_element)
    {
        cout << low+1 << endl;
    }
    else if (v[mid] == find_element)
    {
        cout << high+1 << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}