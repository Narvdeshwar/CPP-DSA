#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, T;
        cin >> N >> T;
        for (int i = 0; i < N; i++)
        {
            int amount;
            cin >> amount;
            if (amount <= T)
            {
                T = T - amount;
                // cout<<"Total="<<T<<" "<<1<<" "<<amount<<endl;
                cout << 1;
            }
            else
            {
                // cout<<"Total="<<T<<" "<<0<<" "<<amount<<endl;
                cout << 0;
            }
        }
        cout << endl;
    }
}
