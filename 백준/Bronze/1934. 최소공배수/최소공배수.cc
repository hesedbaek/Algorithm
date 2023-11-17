#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int t, a, b, n;

int gcd(int x, int y){
	if(y==0) return x;
	else return gcd(y, x%y);
}

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>a>>b;
		int g = gcd(a, b);
		cout<<a*b/g<<'\n';
	}

}