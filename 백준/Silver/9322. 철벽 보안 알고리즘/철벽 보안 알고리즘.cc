#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int t, n;
string x;
map<string, int> m;
map<int,string> ans;
vector<pair<int, int>>enc;


int main(){
	fastio();
	cin>>t;
	while(t--){
		m.clear();
		ans.clear();
		enc.clear();
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>x;
			m[x] = i;
		}
		
		for(int i=0; i<n; i++){
			cin>>x;
			enc.push_back({i, m[x]});
			
		}
		
		for(int i=0; i<n; i++){
			cin>>x;
			ans[enc[i].second] = x;			
		}
		
		for(auto i:ans)	cout<<i.second<<" ";
		cout<<'\n';
	}

	
}