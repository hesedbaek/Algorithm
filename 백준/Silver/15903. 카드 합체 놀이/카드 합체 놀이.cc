#include <iostream>
#include <algorithm>
#include <set>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, m, a;
multiset<ll> ms;
ll sum;

int main(){
	fastio();
	cin>>n>>m;
	
	for(int i=0; i<n; i++)	cin>>a, ms.insert(a);

	while(m--){
		ll x = *ms.begin();
		ms.erase(ms.begin());
		x += *ms.begin();
		ms.erase(ms.begin());
		ms.insert(x);
		ms.insert(x);
	}
	
	for(ll i:ms)	sum+=i;
	cout<<sum;
	

}