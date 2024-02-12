#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        // condititon 1 when x<=3
        int ans = 0;
        if (x <= 3)
        {
            ans += x * y;
        }
        // condititon 2 when x%3!=0
        else if (x % 3 != 0)
        {
            int divisible = x / 3;
            int remainder = x % 3;
            for (int i = 1; i <= divisible; i++)
            {
                ans += 3 * y;
            }
            ans += (remainder * y) + (divisible * z);
        }
        // condititon when x%3==0
        else
        {
            int divisible = x / 3;
            for (int i = 1; i <= divisible; i++)
            {
                ans += 3 * y;
            }
            ans += (divisible - 1) * z;
        }
        cout << ans << endl;
    }
    return 0;
}
