#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int w, h;
bool a[52][52], chk[52][52];
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(){
	fastio();
	while(1){
		cin>>w>>h;
		if(!w && !h) return 0;
		
		vector<pair<int, int>> v;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin>>a[i][j];
				if(a[i][j])	v.push_back({i, j});
			}
		}
		
		queue<pair<int, int>> q;
		fill(&chk[0][0], &chk[0][0]+52*52, 0);
		int cnt = 0;
		for(auto i:v){
			if(chk[i.first][i.second])	continue;
			q.push({i.first, i.second});
			chk[i.first][i.second] = 1;
			cnt++;
			
			while(q.size()){
				pair<int, int> p = q.front();
				q.pop();
				
				for(int i=0; i<8; i++){
					int x = p.first + dx[i];
					int y = p.second + dy[i];
					
					if(x<0 || x>= h || y<0 || y>=w || chk[x][y] || a[x][y] == 0)	continue;
					chk[x][y] = 1;
					q.push({x, y});
				}
			}
			
		}
		cout<<cnt<<'\n';
	}
}