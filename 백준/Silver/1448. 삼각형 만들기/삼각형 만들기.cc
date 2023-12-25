#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, arr[1000002], mx;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n, greater<int>());
	
	for(int i=0; i<n; i++){
		int a = arr[i];
		int st = i+1;
		int en = i+2;
		if(arr[st]+arr[en]>arr[i]){
			mx = max(mx, arr[st]+arr[en]+arr[i]);
		}		
	}
	if(!mx)	cout<<-1;
	else	cout<<mx;
	
}