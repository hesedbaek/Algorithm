#include <iostream>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, t;
map <int, bool> m;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>t;
		m[t]=1;
	}
	for(auto i:m)	cout<<i.first<<' ';
}