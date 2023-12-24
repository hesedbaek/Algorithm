#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, q, p, cnt, a;
string s;
vector<pair<int, int>>v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>q>>p;
		v.push_back({q, p});
	}
	
	sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2){
		if(p1.first != p2.first)	return p1.first>p2.first;
		else	return p1.second<p2.second;
	});
	
	cout<<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[1].second<<'\n';
	
	sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2){
		if(p1.second != p2.second)	return p1.second<p2.second;
		else	return p1.first>p2.first;
	});
	
	cout<<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[1].second<<'\n';
	
}