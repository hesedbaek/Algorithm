#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;

int main(){
	fastio();
	
	while(1){
		cin>>s;
		bool flag = 0;
		if(s == "0")	return 0;
		
		for(int i=0; i<s.length()/2; i++){
			if(s[i] != s[s.length()-1-i])	flag =1;
		}
		
		if(flag)	cout<<"no";
		else cout<<"yes";
		cout<<'\n';
	}
}