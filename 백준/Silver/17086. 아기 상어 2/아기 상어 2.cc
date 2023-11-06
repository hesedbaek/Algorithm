#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, mn = 0;
int a[52][52];
int chk[52][52];

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
vector<int> v;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	
	queue<pair<int, int>> q;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j])	continue;
			
		//	cout<<"-------"<<i<<" "<<j<<" ---------"<<'\n';
			fill(&chk[0][0], &chk[0][0] + 52*52, 0);
			v.clear();
			
			q.push({i, j});
			chk[i][j] = 1;
			
			while(q.size()){
				pair<int, int> p = q.front();
				q.pop();
				for(int i=0; i<8; i++){
					int x = p.first + dx[i];
					int y = p.second + dy[i];
					if(x<0 || y<0 || x>=n || y>=m || chk[x][y])	continue;
					if(a[x][y] == 1){
						chk[x][y] = 1;
			//			cout<<"if 1: "<<x<<" "<<y<<" "<<chk[p.first][p.second]<<'\n';
						v.push_back(chk[p.first][p.second]);
						continue;
					}
					chk[x][y] = chk[p.first][p.second] +1;
					q.push({x, y});
					
		//			cout<<x<<" "<<y<<": "<<chk[x][y]<<'\n';
				}
			}
			sort(v.begin(), v.end());
			mn = max(mn, v[0]);
		}
	}	
	cout<<mn;
}