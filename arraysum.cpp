#include <bits/stdc++.h>
using namespace std;
int arraySum(int arr[], int n)
{
    return n < 0 ? 0 : arraySum(arr, n - 1) + arr[n];
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arraySum(arr, 5);
    return 0;
}