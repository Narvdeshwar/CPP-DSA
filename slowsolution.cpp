#include <iostream>
#include <vector>
using namespace std;
vector<int> print(int n)
{
    vector<int> ans;
    if (n == 0)
    {
        cout << n << endl;
        for (auto a : ans)
        {
            cout << "base condition has been encountered : ";
        }
        return ans;
    }
    ans = print(n - 1);
    cout << "Vector after print(" << n - 1 << "): ";
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return ans;
}
int main()
{
    int n = 5;
    vector<int> ans = print(n);
    for (auto as : ans)
    {
        cout << as << " ";
    }
    return 0;
}
