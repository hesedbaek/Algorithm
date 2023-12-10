#include <iostream>
#include <cmath>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
bool chk[4000002];
int sum[2000002];

int main(){
	fastio();
	cin>>n;
	
	for(int i=2; i<=sqrt(n); i++){
		if(chk[i])	continue;
		for(int j=i*2; j<=n; j+=i){
			chk[j] = 1;
		}
	}
	
	int j=1;
	for(int i=2; i<=n; i++){
		if(chk[i])	continue;
		sum[j] = sum[j-1]+i;
		j++;
	}
	
	int st = 0, cnt = 0, en = 1;
	while(st<j){
//		cout<<"a";
		if(en >= j){
			en = j;
			st++;
		}
		
		if(sum[en]-sum[st] <n)	en++;
		else if(sum[en]-sum[st] >n)	st++;
		else{
			cnt++;
			en++;
		}
	}
	cout<<cnt;
}