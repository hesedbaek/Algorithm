#include <iostream>
#include <algorithm>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, m, a;
priority_queue <ll, vector<ll>, greater<ll>> ms;
ll sum;

int main(){
	fastio();
	cin>>n>>m;
	
	for(int i=0; i<n; i++)	cin>>a, ms.push(a);

	while(m--){
		ll x = ms.top();
		ms.pop();
		x += ms.top();
		ms.pop();
		ms.push(x);
		ms.push(x);
	}
	
	while(ms.size()){
		sum+=ms.top();
		ms.pop();
	}	
	cout<<sum;
	

}