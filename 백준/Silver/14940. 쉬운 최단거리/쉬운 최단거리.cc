#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, m, y, arr[1002][1002];
int chk[1002][1002];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(){
	fastio();
	cin>>n>>m;
	
	queue<pair<int, int>> q;
//	fill(&chk[0][0], &chk[0][0]+1002*1002, -1);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
			if(arr[i][j]==2){
				q.push({i, j});
			//	chk[i][j];
			}
		}
	}
	
	while(q.size()){
		pair<int, int> p = q.front(); q.pop();
		
		for(int i=0; i<4; i++){
			int x = p.first + dx[i];
			int y = p.second + dy[i];
			if(x<0 || x >=n || y<0 || y>=m || arr[x][y] == 0 || chk[x][y]) continue;
			chk[x][y] = chk[p.first][p.second]+1;
			q.push({x, y});
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!chk[i][j] && arr[i][j] ==1) cout<<-1<<" ";
			else if(arr[i][j]==2) cout<<0<<" ";
			else cout<<chk[i][j]<<" ";
		}
		cout<<'\n';
	}

}