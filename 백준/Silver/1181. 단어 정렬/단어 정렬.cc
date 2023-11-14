#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int n;
vector<pair<int, string>> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		v.push_back({s.length(), s});
	}

	sort(v.begin(), v.end(), [](pair<int, string> p1, pair<int, string> p2){
		if(p1.first == p2.first) return p1.second<p2.second;
		return p1.first<p2.first;
	});
	
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for(auto i:v)	cout<<i.second<<'\n';

}