#include <iostream>
using namespace std;

int n, m, a, arr[1002];

int main(){
	cin>>n>>m;
	for(int i=1; i<n+1; i++)	cin>>arr[i];
	
	int cur = 1;
	for(int i=0; i<m; i++){
		cin>>a;
		cur += a;
		if(cur >=n){
			cout<<i+1;
			return 0;
		} 
		cur += arr[cur];
		if(cur >=n){
			cout<<i+1;
			return 0;
		} 
	}
	cout<<m;
}