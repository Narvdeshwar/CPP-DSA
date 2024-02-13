#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, K;
        cin >> N >> X >> K;
        if (X > K)
        {
            cout << 0 << endl;
        }
        else if (N * X > K)
        {
            cout << K / X << endl;
        }
        else
        {
            cout << N << endl;
        }
    }
    return 0;
}
