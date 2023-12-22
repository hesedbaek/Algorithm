#include <iostream>
#include <cmath>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int a, b, n, x, mn = 10002;

int main(){
	fastio();
	cin>>a>>b>>n;
	while(n--){
		cin>>x;
		mn = min(mn, abs(b-x));
	}
	if(mn>=abs(a-b)) cout<<abs(a-b);
	else cout<<mn+1;	
}