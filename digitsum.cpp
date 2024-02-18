#include <bits/stdc++.h>
using namespace std;
int digit_sum(int num)
{
    //logic
    return num == 0 ? 0 : digit_sum(num / 10) + (num % 10);
}
int main()
{
    int num = 1010;
    cout << digit_sum(num);
    return 0;
}