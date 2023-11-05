#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, a1[1000002], a2[1000002], t;

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a1[i];
		}
		cin>>m;
		for(int i=0; i<m; i++){
			cin>>a2[i];
		}
		sort(a1, a1+n);
	
		for(int i=0; i<m; i++){
			cout<<binary_search(a1, a1+n, a2[i])<<'\n';
		}
	}
}