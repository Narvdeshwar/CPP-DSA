#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int M,H;
	    cin>>M>>H;
	    int cat=M/(H*H);
	    int ans;
	    if(cat<=18){
	        ans=1;
	    }
	    else if(cat>18 && cat<=24){
	        ans=2;
	    }
	    else if(cat>24 && cat<=29){
	        ans=3;
	    }
	    else{
	        ans=4;
	    }
	    cout<<ans<<endl;
	}

}
