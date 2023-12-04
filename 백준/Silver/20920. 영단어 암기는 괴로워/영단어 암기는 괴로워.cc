#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m;
char c;
string s;
map<string, int> mp;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s;
		if(s.length() < m)	continue;
		mp[s]++;
	}
	
	vector<pair<string, int>> v(mp.begin(), mp.end());
	
	sort(v.begin(), v.end(), [](pair<string, int> p1, pair<string, int> p2){
		if(p1.second != p2.second)	return p1.second>p2.second;
		else{
			if(p1.first.length() != p2.first.length())	return p1.first.length()>p2.first.length();
			else	return p1.first<p2.first;
		}
	});
	
	for(auto i:v) cout<<i.first<<'\n';
	
}