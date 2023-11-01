#include <iostream>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, a, cnt;
vector<int>v;

int main(){
	fastio();
	cin>>n>>k;
	for(int i =0; i<n; i++){
		cin>>a;
		if(a <= k)	v.push_back(a);
	}
	
	for(int i=v.size()-1; i>=0; i--){
		cnt += k/v[i];
		k %= v[i];
	}
	cout<<cnt;
}