#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, t[52], a[52], g[52], c[52];
string s;
vector<pair<int,char>> v[52];

int main(){
	fastio();
	
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j = 0; j<m; j++){
			if(s[j] =='T')	t[j]++;
			else if(s[j] == 'A')	a[j]++;
			else if(s[j] == 'G')	g[j]++;
			else if(s[j] == 'C')	c[j]++;	
		}
	}
	
	int cnt = 0;
	for(int i=0; i<m; i++){
		
		v[i].push_back({a[i], 'A'});
		v[i].push_back({c[i], 'C'});
		v[i].push_back({g[i], 'G'});
		v[i].push_back({t[i], 'T'});
		
		vector<pair<int, char>> vv = {v[i].begin(), v[i].end()};
	
		stable_sort(vv.begin(), vv.end(),[](pair<int, char> p1, pair<int, char> p2){
			return p1.first>p2.first;
		});
	
	//	for(auto j: vv)	cout<<j.first<<" "<<j.second<<'\n';
		cnt += n-vv[0].first;
		
		cout<<vv[0].second;
	}
	cout<<'\n';
	cout<<cnt;
	
	
}