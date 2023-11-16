#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int n, m, t;

int main(){
	fastio();
	cin>>n;
	int arr[n] = {0};
	for(int i=0; i<n; i++)	cin>>arr[i];
	sort(arr, arr+n);
	
	cin>>m;
	while(m--){
		cin>>t;
		cout<<binary_search(arr, arr+n, t)<<'\n';
	}
}