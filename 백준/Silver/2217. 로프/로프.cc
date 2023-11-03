#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a, t, mx;
vector<int> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<n; i++){
		mx = v[i]*(n-i);
		t = max(mx, t);
	}
	cout<<t;
	
}