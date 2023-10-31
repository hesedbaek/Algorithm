#include <iostream>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, t, a, arr[1000002];
vector<int> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		arr[i] = a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for(int i=0; i<n; i++){
		cout<<lower_bound(v.begin(), v.end(), arr[i]) - v.begin()<<" ";
	}	
	
}
