#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

int n, m, ret;
int lab[10][10];
bool chk[10][10];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<pair<int, int>> wall, virus;

int Safe(){
	fill(&chk[0][0], &chk[0][0]+10*10, 0);
	int cnt =0;
	queue<pair<int, int>> q;
	for(auto i:virus){
		if(chk[i.first][i.second])	continue;
		q.push({i.first, i.second});
		chk[i.first][i.second] = 1;
		
		while(!q.empty()){
			pair<int, int> p = q.front(); q.pop();
			for(int i=0; i<4; i++){
				int x = p.first + dx[i];
				int y = p.second + dy[i];
				if(x<0 || x>=n || y<0 ||y>=m || chk[x][y] || lab[x][y] == 1)	continue;
				chk[x][y] = 1;
				q.push({x, y});
			}
		}		
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(chk[i][j] == 0 && lab[i][j] == 0) cnt++;
		}
	}
	return cnt;
	
}



int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>lab[i][j];
			if(lab[i][j] == 0)	wall.push_back({i, j});
			if(lab[i][j] == 2)	virus.push_back({i, j});
		}
	}
	
	for(int i=0; i<wall.size(); i++){
		for(int j=i+1; j<wall.size(); j++){
			for(int k=j+1; k<wall.size(); k++){
				lab[wall[i].first][wall[i].second] = 1;
				lab[wall[j].first][wall[j].second] = 1;
				lab[wall[k].first][wall[k].second] = 1;
				ret = max(ret, Safe());
				lab[wall[i].first][wall[i].second] = 0;
				lab[wall[j].first][wall[j].second] = 0;
				lab[wall[k].first][wall[k].second] = 0;				
			}
		}
	}
	cout<<ret;
}