#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int total=a*2;
        int ans;
        if(a<b){
            cout<<a<<endl;
        }
        else if(a>b){
            cout<<total-b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
}
