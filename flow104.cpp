/**
 * Hardness of the steel must be greater than 50
 * Carbon content of the steel must be less than 0.7
 * Tensile strength must be greater than 5600
 *** The grades awarded are as follows:
 * Grade is 10 if all three conditions are met
 * Grade is 9 if conditions (1) and (2) are met
 * Grade is 8 if conditions (2) and (3) are met
 * Grade is 7 if conditions (1) and (3) are met
 * Grade is 6 if only one condition is met
 * Grade is 5 if none of the three conditions are met
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c;
        float b;
        cin >> a >> b >> c;
        int ans;
        if (a > 50 && b < 0.7 && c > 5600)
        {
            ans = 10;
        }
        else if (a > 50 && b < 0.7)
        {
            ans = 9;
        }
        else if (b < 0.7 && c > 5600)
        {
            ans = 8;
        }
        else if (a > 50 && c > 5600)
        {
            ans = 7;
        }
        else if (a > 50 || b < 0.7 || c > 5600)
        {
            ans = 6;
        }
        else
        {
            ans = 5;
        }
        cout << ans << endl;
    }
    return 0;
}