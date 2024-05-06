#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j <3; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}