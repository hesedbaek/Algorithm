#include <iostream>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m;
char c;
string s;
map<string, bool> mp;

int main(){
	fastio();
	cin>>n>>c;
	
	if(c == 'Y') m = 1;
	else if(c == 'F')	m = 2;
	else	m = 3;
	
	for(int i=0; i<n; i++){
		cin>>s;
		mp[s] = 1;
	}
	
	cout<<mp.size()/m;
}