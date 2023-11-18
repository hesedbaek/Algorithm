#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, m, x, y, arr[100002];

int main(){
	fastio();
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>t;
		arr[i] = arr[i-1]+t;
	}
	
	while(m--){
		cin>>x>>y;
		cout<<arr[y] - arr[x-1]<<'\n';
	}

}