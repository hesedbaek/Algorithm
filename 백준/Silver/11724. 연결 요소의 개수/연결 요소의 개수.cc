#include <iostream>
#include <vector>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, u, v, cnt;
bool chk[1002];

int main(){
	fastio();
	cin>>n>>m;
	vector<int> vec[n+1];
	for(int i=0; i<m; i++){
		cin>>u>>v;
		vec[u].push_back(v);
		vec[v].push_back(u);		
	}
	
	queue<int> q;
	for(int i=1; i<=n; i++){
		if(chk[i])	continue;
		q.push(i);
		chk[i] = true;
		while(q.size()){
			int cur = q.front();
			q.pop();
			for(int i:vec[cur]){
				if(chk[i])	continue;
				chk[i]=true;
				q.push(i);
			}
		}
		cnt++;
	}
	cout<<cnt;
}