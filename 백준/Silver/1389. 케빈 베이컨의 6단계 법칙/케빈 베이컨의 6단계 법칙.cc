#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, a, b, chk[102];
vector<int> v[102];
vector<pair<int, int>> ans;
int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++){
		fill(chk, chk+102, -1);
		queue<int> q;
		int cnt =0;
		
		q.push(i);
		chk[i]++;
		while(q.size()){
			int cur = q.front();
			q.pop();
			
			for(int j:v[cur]){
				if(chk[j] != -1)	continue;
				q.push(j);
				chk[j] = chk[cur] +1;
			}
		}
		
		for(int i=1; i<=n; i++){
			if(chk[i] != -1)	cnt+= chk[i];
		}
		ans.push_back({cnt, i});
	}
	
	sort(ans.begin(), ans.end());
	cout<<ans[0].second;
		
}