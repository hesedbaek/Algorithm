#include <iostream>
#include <set>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n;
string s;
multiset<ll>m;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		reverse(s.begin(), s.end());
		ll k = stoll(s);
		m.insert(k);
	
	}
	for(ll i:m)	cout<<i<<'\n';
}