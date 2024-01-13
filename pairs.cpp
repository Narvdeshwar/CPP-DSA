#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
    pair<int, int> p1;
    // first way to create pair
    p1 = make_pair(3, 4);
    cout << p1.first << " " << p1.second << endl;
    // second way to initialsize pair
    p1 = {5, 6};
    cout << p1.first << " " << p1.second << endl;
    // taking input of pair from user
    cout << "First pair value ->";
    cin >> p1.first;
    cout << "Second pair value ->";
    cin >> p1.second;
    cout << p1.first << " " << p1.second << endl;
    return 0;
}