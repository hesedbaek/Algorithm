#include <iostream>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, t, a;
vector<int> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	
	cin>>t;
	
	while(t--){
		cin>>a;
		cout<<upper_bound(v.begin(), v.end(), a) - lower_bound(v.begin(), v.end(), a)<<" ";
	}
}