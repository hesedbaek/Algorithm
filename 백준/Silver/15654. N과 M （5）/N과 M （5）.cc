#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int a, n, m;
bool chk[10002];
vector<int> v, ans;
	
void go(){
	if(ans.size() == m){
		for(int t:ans)	cout<<t<<" ";
		cout<<'\n';
		return;
	}
	
	for(int i=0; i<n; i++){
		if(chk[i])	continue;
		chk[i] = 1;
		ans.push_back(v[i]);
		go();
		chk[i] = 0;
		ans.pop_back();
	}
	return;
}

int main(){
	fastio();
	cin>>n>>m;

	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	go();
}