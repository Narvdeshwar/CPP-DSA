#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double q,p;
	    cin>>q>>p;
	    if(q<=1000)
	    {
	        cout<<fixed<<q*p<<'\n';
	    }
	    else if(q>1000)
	    {
	        cout<<fixed<<(q*p)-(q*p*0.1)<<'\n';
	    }
	}

}