#include <iostream>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
bool chk[10];
vector<int> v;

void go(int k){
	if(v.size() == m){
		for(int j:v)	cout<<j<<' ';
		cout<<'\n';
		return;
	}
	
	for(int i=k; i<=n; i++){
		v.push_back(i);
		go(i);
		v.pop_back();
	}
	return;
}

int main(){
	fastio();
	cin>>n>>m;
	go(1);
}