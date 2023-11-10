#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, a, cnt, sum[10002];

int main(){
	fastio();
	cin>>n>>m;
	
	for(int i=1; i<n+1; i++){
		cin>>a;
		sum[i] = a+sum[i-1];
	}
	
	int st = 0, en = 0;
	
	while(st<n){
		if(en > n)	en = n;
		if(sum[en]-sum[st]<m){
			en++;
			if(en > n)	break;
		//	cout<<"a";
		}
		else if(sum[en]-sum[st]>m){
			st++;
		//	cout<<"b";
		}
		else{
			cnt++;
		//	cout<<"c";
			if(en == n)	st++;
			en++;
		}
	}
	cout<<cnt;
	
	
}