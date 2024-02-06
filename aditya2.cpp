#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int R1,R2,R3,R4,R5;
	    cin>>R1>>R2>>R3>>R4>>R5;
	    int sum=R1+R2+R3+R4+R5;
	    if(sum>=4){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
