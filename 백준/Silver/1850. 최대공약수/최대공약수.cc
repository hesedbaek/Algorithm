#include <iostream>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

ll a, b, n;
string m;

ll gcd(ll x, ll y){
	if(y==0) return x;
	else return gcd(y, x%y);
}

int main(){
	fastio();
	cin>>a>>b;
	
	ll n = gcd(a, b);
	
	for(int i=0; i<n; i++)	m+='1';
	cout<<m;
}