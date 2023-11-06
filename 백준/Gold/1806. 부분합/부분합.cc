#include <iostream>
#include <algorithm>
#define fastio() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, a, s;
ll sum[100002];

int main(){
	fastio();
	cin>>n>>s;
	cin>>sum[1];
	for(int i=2; i<=n; i++){
		cin>>a;
		sum[i] = sum[i-1]+a;
	}
	
	int st =0, en = 1, mn = 0x7fffffff;
	while(st<n){
		if(en >=n+1)	en = n;

		else if(sum[en] - sum[st] >= s){
			mn = min(mn, en-st);
			st++;
		//	cout<<"a";
		}
		else{
			if(en == n)	break;
			en++;
		}
	}
	if(mn == 0x7fffffff)	cout<<0;
	else cout<<mn;	
}