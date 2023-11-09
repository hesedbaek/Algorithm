#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, d[14];

int main(){
	fastio();
	cin>>t;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	
	while(t--){
		cin>>n;
		
		for(int i=3; i<n; i++)	d[i+1] = d[i] + d[i-1] + d[i-2];
		
		cout<<d[n]<<'\n';	
	}

}