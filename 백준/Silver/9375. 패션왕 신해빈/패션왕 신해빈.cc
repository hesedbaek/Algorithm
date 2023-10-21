#include <iostream>
#include <map>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

string s1, s2;

int main(){
	fastio();
	int n=0, m=0;
	cin>>n;
	while(n--){
		cin>>m;
		map <string, int> mp;
		int sum = 0, sss=1;
		
		while(m--){
			cin>>s1>>s2;
			mp[s2]++;
		}
		
		for(auto i:mp)	sss *= (i.second+1);
		cout<<sss-1<<'\n';	
	}
}
	