#include <iostream>
#include <vector>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m;
bool chk[10];
vector<int> v;

void go(int k){
	if(v.size() == m){
		for(int i:v)	cout<<i<<" ";
		cout<<'\n';
		return;
	}
	
	for(int i=1; i<=n; i++){	
		chk[i] = 1;
		v.push_back(i);
		go(i+1);
		chk[i] = 0;
		v.pop_back();
	}
}

int main(){
	cin>>n>>m;
	fastio();
	go(1);
}