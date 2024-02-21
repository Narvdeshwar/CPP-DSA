#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int maxScore = 0;
        int playerNumber;
        for (int i = 0; i < 22; i++)
        {
            int a, b;
            cin >> a >> b;
            int total = a + (b * 20);
            // cout<<total<<" "<<i<<" ";
            if (maxScore < total)
            {
                maxScore = total;
                playerNumber = i;
            }
        }
        // cout<<endl;
        cout << playerNumber + 1 << endl;
    }
}