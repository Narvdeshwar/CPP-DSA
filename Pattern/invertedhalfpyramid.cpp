#include <bits/stdc++.h>
using namespace std;
int main()
{
    // lets start
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}