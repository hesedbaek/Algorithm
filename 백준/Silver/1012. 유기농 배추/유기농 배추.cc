#include <iostream>
#include <queue>
#include <utility>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int t, n, m, k, A, B;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main(){
	fastio();
	cin>>t;
	
	while(t--){
		cin>>n>>m>>k;
		int a[102][102] = {0};
		bool chk[102][102] = {0};
		int cnt = 0;
		
		while(k--){
			cin>>A>>B;
			a[A][B] = 1;
		}
			
		queue<pair<int, int>> q;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(chk[i][j] || a[i][j] == 0)	continue;
				chk[i][j] = 1;
				q.push({i, j});
				cnt++;
				
				while(!q.empty()){
					pair<int, int> p = q.front();
					q.pop();
					for(int i=0; i<4; i++){
						int x = p.first + dx[i];
						int y = p.second + dy[i];
						if(x<0 || x>=n || y<0 || y>=m)	continue;
						if(chk[x][y] || a[x][y] == 0)	continue;
						chk[x][y] = 1;
						q.push({x, y});
					}
				}	
			}
		}
		cout<<cnt<<'\n';
	}
}