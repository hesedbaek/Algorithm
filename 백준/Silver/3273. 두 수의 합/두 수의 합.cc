#include <iostream>
#include <algorithm>
using namespace std;

int n, x, a[100002];

int main(){
	cin>>n;
	for(int i=0; i<n; i++)	cin>>a[i];
	cin>>x;
	
	sort(a, a+n);
	
	int l = 0, r=n-1, ret =0;
	while(l<r){
		if(a[l]+a[r] == x)	r--, ret++;
		else if(a[l]+a[r] <x)	l++;
		else r--;
	}
	cout<<ret;
}