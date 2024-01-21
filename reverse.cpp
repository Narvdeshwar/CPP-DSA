/**
 *  int arr[5] = {2, 3, 1, 5, 6}
 *  # output
 *  6 5 1 3 2
 *  int arr2[6] = {3, 1, 7, 9, 2, 5}
 * # output
 *  5 2 9 7 1 3
*/
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5] = {2, 3, 1, 5, 6};
    int arr2[6] = {3, 1, 7, 9, 2, 5};
    reverse(arr1, 5);
    reverse(arr2,6);
    printArray(arr1, 5);
    printArray(arr2,6);
    return 0;
}