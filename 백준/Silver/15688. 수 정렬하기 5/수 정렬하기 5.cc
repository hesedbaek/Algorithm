#include <iostream>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, t;
map <int, int> m;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>t;
		m[t]++;
	}
	for(auto i:m){
		int j = i.second;
		while(i.second--)	cout<<i.first<<'\n';
	}
}