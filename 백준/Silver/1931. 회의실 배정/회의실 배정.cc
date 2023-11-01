#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a, b, cnt;
vector<pair<int,int>>v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		v.push_back({b, a});	
	}
	sort(v.begin(), v.end());
	
	a = v[0].first;
	
	for(int i=1; i<n; i++){
		if(v[i].second >= a){
			cnt++;
			a = v[i].first;
		}
	}
	cout<<cnt+1;
	
}