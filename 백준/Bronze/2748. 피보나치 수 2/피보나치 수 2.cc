#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

long long n, f[92];

int main(){
	fastio();
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	
	cin>>n;
	
	for(int i=3; i<=n; i++){
		f[i] = f[i-1]+f[i-2];
	//	cout<<f[i]<<" ";
	}
	cout<<f[n];
	
}