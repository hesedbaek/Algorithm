#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, t, cnt, a[100002];
string s;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++)	cin>>a[i];
	cin>>t;
	sort(a, a+n);
	
	int st =0, en =n-1;
	while(st<en){
		if(a[st]+a[en]>t)	en--;
		else if(a[st]+a[en]<t)	st++;
		else{
			cnt++;
			en--;
		}
	}
	cout<<cnt;
	
}