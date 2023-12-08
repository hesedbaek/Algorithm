#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, k, a[1002];

int main(){
	fastio();
	cin>>n>>k;
	for(int i=0; i<n; i++)	cin>>a[i];
	sort(a, a+n);
	cout<<a[n-k];
}