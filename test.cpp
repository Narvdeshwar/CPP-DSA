#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    int left=-1, right=-1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            left = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] == key)
        {
            right = i;
            break;
        }
    }
    cout << left << " " << right << endl;

    return 0;
}
