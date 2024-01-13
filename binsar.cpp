#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
   int left = 0, right = size - 1;
    int mid = (left + right) / 2;
    while (left <= right) 
    {
        if (arr[mid] == 1)
        {
            cout << mid << endl;
            break;
        }
        else if (arr[mid] < 1)
        {
            left++;
        }
        else
        {
            right++;
        }
        mid = (left + right) / 2;
    }
    cout<<"not found"<<endl;
}