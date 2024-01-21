#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char ch;
	    cin>>ch;
	    unordered_map<char,string> mp={{'c':"Cruiser"},{'C':"Cruiser"},{'B':"BattleShip"},{'b':"BattleShip"},{'d':"Destroyer"},{'D':"Destroyer"},{'f':"Frigate"},{'F':"Frigate"}};
	    cout<<mp[ch]<<endl;
	}

}
