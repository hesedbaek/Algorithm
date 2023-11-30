#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m, sum, cnt, k, arr[1002];

int main(){
	fastio();
	cin>>n;
	cin>>m>>k;
	int mem = m*k;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	if(sum < mem){
		cout<<"STRESS";
		return 0;
	}
	
	sort(arr, arr+n, greater<>());
	
	int i=0;
	while(mem>0){
		mem -= arr[i++];
		cnt++;		
	}
	
	cout<<cnt;
}