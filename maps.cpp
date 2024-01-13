#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    // Inserting elements into the map
    m[1] = "hello";
    m[2] = "buddy";
    m.insert({4, "roar"});
    m.insert(make_pair(3, "ravi"));

    // Iterating through the map
    for (const auto &val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    // Finding an element in the map using find()
    auto it = m.find(5);
    if (it != m.end())
    {
        cout << "Element found: " << it->first << " " << it->second << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    // Erasing an element from the map using erase()
    // Note: We need to check if the element exists before erasing
    it = m.find(2);
    if (it != m.end())
    {
        m.erase(it);
        cout << "Element with key 2 erased." << endl;
    }
    else
    {
        cout << "Element with key 2 not found." << endl;
    }
    // clearing the map
    return 0;
}
