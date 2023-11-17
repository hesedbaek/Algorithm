#include <iostream>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
typedef long long ll;

ll a, b, c;

ll go(ll a, ll b){
	if(b==1)	return a%c;
	
	ll val = go(a, b/2);
	val = (val*val)%c;
	if(b%2)	val = val*a%c;
	return val;
}

int main(){
	fastio();
	cin>>a>>b>>c;
	cout<<go(a, b);
}