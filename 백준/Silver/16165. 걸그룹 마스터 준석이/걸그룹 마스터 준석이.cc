#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, q, num;
string t, s;
vector<string> v;
map<string, string> mp;
map<string, vector<string>> mp2;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>t>>num;
		v.clear();
		for(int j=0; j<num; j++){
			cin>>s;
			mp[s] = t;
			v.push_back(s);
			mp2[t] = v;
		}
	}
	
	for(int i=0; i<m; i++){
		cin>>s>>q;
		if(q){
			cout<<mp[s]<<'\n';
		}
		else{
			vector<string>v2;
			for(auto i:mp2[s])	v2.push_back(i);
			sort(v2.begin(), v2.end());
			for(auto i:v2)	cout<<i<<'\n';
		}
	}
	
}