#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, t, x, y, arr0[42], arr1[42];

int main(){
	fastio();
	cin>>t;
	
	arr0[0] = 1;
	arr1[0] = 0;
	arr0[1] = 0;
	arr1[1] = 1;
	while(t--){
		cin>>n;
		
		for(int i=2; i<=n; i++){
			arr0[i] = arr0[i-1]+arr0[i-2];
			arr1[i] = arr1[i-1]+arr1[i-2];
		}
		
		cout<<arr0[n]<<" "<<arr1[n]<<'\n';
	}
	
}