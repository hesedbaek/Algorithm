#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, t, x, y, arr[100002];

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=0; i<m; i++){
		cin>>x>>y;
		bool flagy=0;
		auto X = lower_bound(arr, arr+n, x);
		auto Y = lower_bound(arr, arr+n, y);
	//	if(*X != x) flagx = 1;
		if(*Y != y) flagy = 1;

		if(flagy)	t = Y-X;
		else	t = Y-X+1;
		cout<<t<<'\n';
	}
	
}