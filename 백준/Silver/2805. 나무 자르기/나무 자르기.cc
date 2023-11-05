#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, m;
int a[1000002];
ll mx, ans;
vector<int> v;

int go(int t){
	ll cur = 0;
	for(int i=0; i<n; i++){
		//cout<<a[i]-t<<'\n';
		ll val = a[i]-t;
		if(val>0)	cur += a[i]-t;
	}
	//cout<<"cur"<<cur<<'\n';
	return cur>=m;
}

int main(){
	fastio();
	cin>>n>>m;
	
	for(int i=0; i<n; i++)	cin>>a[i];
	
	ll st = 1, en = 2000000000;
	
	while(st<=en){
		ll mid = (st+en)/2;
		//cout<<"st, en, mid: "<<st<<" "<<en<<" "<<mid<<'\n';
		
		if(go(mid)){
			st = mid +1;
			mx = max(mx, mid);
		}
		else en = mid-1;
	}
	
	cout<<mx;
}