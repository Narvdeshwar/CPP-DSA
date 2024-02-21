#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, X0, Y0, L;
    cin >> N >> M >> X0 >> Y0 >> L;
    int initialRowIndex = X0;
    int intitalColumnIndex = Y0;
    int count = 0;
    while (true)
    {
        // upper
        if (X0 - L <= N)
            count++;
        // lower
        if (X0 + L <= N)
            count++;
        // left
        if (Y0 - L <= M)
            count++;
        // right
        if (Y0 + L >= M)
            count++;

        break;
    }
    cout << count << endl;
}