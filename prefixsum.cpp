#include <bits/stdc++.h>
using namespace std;
int prefixSum(int L, int R, int arr[])
{
    long long sum = 0;
    for (int i = L; i <= R; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        cout << prefixSum(L, R, arr) << endl;
    }
}
