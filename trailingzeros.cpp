#include <bits/stdc++.h>
using namespace std;
string lengthCheck(string num)
{
    if (num.size() == 1)
    {
        num = "000" + num;
    }
    if (num.size() == 2)
    {
        num = "00" + num;
    }
    if (num.size() == 3)
    {
        num = "0" + num;
    }
    return num;
}
int removeLeadingZeros(string str)
{
    int nonZeroEncounter = -1;

    // Find the index of the first non-zero character
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '0')
        {
            nonZeroEncounter = i;
            break; // Stop as soon as we find the first non-zero digit
        }
    }

    // If the entire string is zeros, return 0
    if (nonZeroEncounter == -1)
    {
        return 0;
    }

    // Extract the substring starting from the first non-zero character
    string ans = "";
    for (int j = nonZeroEncounter; j < str.size(); j++)
    {
        ans += str[j];
    }

    return stoi(ans); // Convert the resulting string to an integer
}
int main()
{
    int nums1, nums2, nums3;
    cin >> nums1 >> nums2 >> nums3;
    string snums1 = to_string(nums1);
    string snums2 = to_string(nums2);
    string snums3 = to_string(nums3);

    snums1 = lengthCheck(snums1);
    snums2 = lengthCheck(snums2);
    snums3 = lengthCheck(snums3);

    string ans;
    for (int i = 0; i < 4; i++)
    {
        int digit1 = snums1[i] - '0';
        int digit2 = snums2[i] - '0';
        int digit3 = snums3[i] - '0';
        ans += to_string(min({digit1, digit2, digit3}));
    }

    cout << removeLeadingZeros(ans) << endl;
    return 0;
}
