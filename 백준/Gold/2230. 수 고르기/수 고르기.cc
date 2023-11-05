#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, a[100002];

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++)	cin>>a[i];
	
	sort(a, a+n);
	
	int l=0, r=0, mn = 0x7fffffff;
	while(l<n){
	//	cout<<l<<" "<<r<<'\n';
		if(r>=n)	r = n-1;
		if(a[r]-a[l] >= m){
			mn = min(mn, a[r]-a[l]);
			l++;
		}
		else if(a[r]-a[l] < m){
			r++;
			if(r == n) l = n;
		}
	}
	cout<<mn;	
}