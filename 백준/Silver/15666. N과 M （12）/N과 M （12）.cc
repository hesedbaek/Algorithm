#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int tmp, n, m, a;
vector<int> v, ans;
set<vector<int>> s;

void go(int t){
	if(ans.size() == m){
		s.insert(ans);
		return;
	}

	for(int i=t; i<n; i++){
		ans.push_back(v[i]);
		go(i);
		ans.pop_back();
	}	
}

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	go(0);

	for(auto i:s){
		for(auto j:i)	cout<<j<<" ";
		cout<<'\n';
	}
}