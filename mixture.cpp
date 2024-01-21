#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a==0){
	        std::cout << "Liquid" << std::endl;
	    }
	    else if(b==0){
	        std::cout << "Solid" << std::endl;
	    }
	    else{
	        std::cout << "Solution" << std::endl;
	    }
	}
}
