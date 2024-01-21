# problem
Given an array of n integers. Given Q queries and each query given L and R sum of array elements from L to R (L,R included).
contrainst:
1<=N<10^5
1<=a[i]<=10^9
1<=1<=10^5
1<=L,R<=10^5

# Traditional method
```cpp
#include <bits/stdc++.h>
using namespace std;
int prefixSum(int L, int R, int arr[])
{
    long long sum = 0;
    for (int i = L; i <= R; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        cout << prefixSum(L, R, arr) << endl;
    }
}
```
## complexity analysis
    O(n)+O(Q*N)=O(N^2)

# optimised method
```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 10;
int arr[N];
int pf[N];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        cout<<pf[R]-pf[L-1]<<endl;
    }
}
/*complexity analysis
* Time complexity => O(n)
*/
```
# Euclid GCD
```cpp
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return (a, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout<<(gcd(a,b));
}
```
# problem 
 ## Given 2D array of N*N integers .given q queries and each given a,b,c,d. print sum of all sqaures represented by (a,b) as top left point and (c,d) as top bottom.
 ##  Constraints
 ##  1<=N<=10^3
 ##  1<=a[i][j]<=10^9
 ##  1<=Q<=10^5
 ##  1<=a,b,c,d<=N
 ## INPUT * *
 ##  3
 ##  3 6 2
 ##  8 9 2
 ##  3 4 1
 ##  2
 ##  1 1 2 2
 ##  1 2 3 3
 ##  OUTPUT * *
 ##  26
 ##  24
```cpp
#include <bits/stdc++.h>
const int N = 1e5 + 10;
int arr[N][N];
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long int sum = 0;
        for (int i = a; i <= c; i++)
        {
            for (int j = b; j <= d; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
}
```
/**
 * @complexity O(n)+O(q*n*n)
 */

# container STL
# sequential container  1. pair
```cpp
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
```
# vector
```cpp
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v)
{
    cout << "array element are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // when we declare the array or vector locally then we can declare only 10^5 size of array or vector
    // However, globally we can declare 10^7 size of array or vector
    vector<int> v;            // initailly the size of vector is zero
    cout << v.size() << endl; // this function takes O(1) time to find the size of vector

    int size;
    cout << "Enter the size of vector - ";
    cin >> size;

    // taking input of vecor
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // add element at the end of vector with O(1) complexity
    }
    time_t start, end;
    time(&start);
    printVector(v);
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5) << " sec " << endl;
    // copy of vector is expensive operation which takes O(n) complexity
    vector<int> v2 = v;
}
```
# vectors of pair
```cpp
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int, int>> v)
{
    // printing vector of pair
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    // vectors of pair
    // declaration
    vector<pair<int, int>> v;
    int size;
    cin >> size;
    // taking input
    for (int i = 0; i < size; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVector(v);
}
```
# vector of arrays -> rows are constant
```cpp
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v)
{
    cout << "vector size is= " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    // vector of arrays
    int N;
    cin >> N;
    vector<int> v[N];
    /*
    Here v[N] indicates of vector of array
    i.e. if N=3 then there will be-
    vector<int> v[0]; => with zero size vector array
    vector<int> v[1]; => with zero size vector array
    vector<int> v[2]; => with zero size vector array
    */
    // taking input of vector of array
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    // printing vector of array
    for (int i = 0; i < N; i++)
    {
        printVector(v[i]);
    }
}
```
# Iterator
```cpp
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

```
# map
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;

    // Inserting elements into the map
    m[1] = "hello";
    m[2] = "buddy";
    m.insert({4, "roar"});
    m.insert(make_pair(3, "ravi"));

    // Iterating through the map
    for (const auto &val : m) {
        cout << val.first << " " << val.second << endl;
    }

    // Finding an element in the map using find()
    auto it = m.find(5);
    if (it != m.end()) {
        cout << "Element found: " << it->first << " " << it->second << endl;
    } else {
        cout << "Element not found." << endl;
    }

    // Erasing an element from the map using erase()
    // Note: We need to check if the element exists before erasing
    it = m.find(2);
    if (it != m.end()) {
        m.erase(it);
        cout << "Element with key 2 erased." << endl;
    } else {
        cout << "Element with key 2 not found." << endl;
    }

    // Clearing all elements from the map
    m.clear();
    cout << "Map cleared." << endl;
    
    return 0;
}


```
