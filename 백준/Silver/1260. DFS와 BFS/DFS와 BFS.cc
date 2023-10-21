#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, v, a, b;
bool chk[1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> adj[1002];

void dfs(int t){
	if(chk[t])	return;	
	chk[t] = 1;
	cout<<t<<" ";
	sort(adj[t].begin(), adj[t].end());
	for(int i:adj[t])	dfs(i);
}

int main(){
	fastio();
	cin>>n>>m>>v; 
	for(int i=0; i<m; i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(v);
	cout<<'\n';
	fill(chk, chk+1002, 0);
	
	queue<int> q;
	q.push(v);
	chk[v] = 1;
	while(q.size()){
		int p = q.front(); q.pop();
		cout<<p<<" ";
		for(int i:adj[p]){
			if(chk[i])	continue;
			chk[i] = 1;
			q.push(i);
		}
	}
}