#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string s1,s2;
	    cin>>s1>>s2;
	    string ans;
	    for(int i=0;i<s1.size();i++){
	        if(s1[i]==s2[i]){
	            ans+='G';
	        }
	        else{
	            ans+='B';
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
