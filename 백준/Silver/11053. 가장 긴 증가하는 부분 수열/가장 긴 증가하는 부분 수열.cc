#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[1002], cnt[1002], ret;

int main(){
	fastio();
	cin>>n;
	
	for(int i=0; i<n; i++)	cin>>a[i];
	
	for(int i=0; i<n; i++){
		int mv = 0;
		for(int j=0; j<i; j++){
			if(a[j]<a[i] && mv < cnt[j])	mv = cnt[j];
		}
		cnt[i] = mv+1;
		ret = max(ret, cnt[i]);
	}
	cout<<ret;
}