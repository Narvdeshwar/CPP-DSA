#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int countR=0,countS=0;
	    for(int i=0;i<7;i++){
	        int x;
	        cin>>x;
	        if(x==1){
	            countS++;
	        }
	        else{
	            countR++;
	        }
	    }
	    if(countS>countR){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
