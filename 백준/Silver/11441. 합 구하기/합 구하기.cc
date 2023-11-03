#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a, m, x, y, sum[100002];

int main(){
	fastio();
	cin>>n;
	cin>>a;
	sum[1] = a;
	for(int i=2; i<=n; i++){
		cin>>a;
		sum[i] = sum[i-1] + a;
	}
	
	cin>>m;
	while(m--){
		cin>>x>>y;
		cout<<sum[y] - sum[x-1]<<'\n';
	}
}