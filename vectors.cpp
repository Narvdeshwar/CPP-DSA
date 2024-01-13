#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Iterator for a vector
    vector<int> v = {2, 1, 2, 4, 1};
    vector<int>::iterator it;

    // Loop through the vector using an iterator
    cout << "Looping through the vector using an iterator:" << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Iterator for a pair in a vector
    vector<pair<int, int>> v1 = {{2, 3}, {4, 5}, {6, 9}};
    vector<pair<int, int>>::iterator it1;

    // First method to print the pair
    cout << "First method to print the pair:" << endl;
    for (it1 = v1.begin(); it1 != v1.end(); ++it1)
    {
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    cout << endl;

    // Second method to print the pair
    cout << "Second method to print the pair:" << endl;
    for (it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << it1->first << " " << it1->second << endl;
    }
    cout << endl;

    // C++11 onwards, you can use the auto keyword with a range-based loop to access container values
    vector<int> v2 = {2, 1, 4, 6};
    cout << "Using the loop with the auto keyword without defining the data type in the iterator:" << endl;
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Range-based loop
    cout << "Using the range-based loop:" << endl;
    for (int value : v2)
    {
        // In this case, 'value' makes a copy. To modify the vector's values, use a reference (&).
        cout << value << " ";
    }
    cout << endl;

    // Range-based loop using the auto keyword
    cout << "Range-based loop using the auto keyword:" << endl;
    for (auto value : v2)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
