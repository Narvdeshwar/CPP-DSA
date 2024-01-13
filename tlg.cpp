#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int cs1 = 0, cs2 = 0, w1 = 0, w2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
         cs1 += x.first;
        cs2 += x.second;
        if (cs1 > cs2)
        {
            int cL=0;
            cL = cs1 - cs2;
            w1=max(w1,cL);
           // cout<<"w1:"<<w1<<endl;
        }
        else
        {   
            int cL=0;
            cL = cs2 - cs1;
            w2=max(w2,cL);
           // cout<<"w2:"<<w2<<endl;
        }
    }
    if (w1 > w2)
    {
        cout << 1 << " " << w1;
    }
    else
    {
        cout << 2 << " " << w2;
    }
}