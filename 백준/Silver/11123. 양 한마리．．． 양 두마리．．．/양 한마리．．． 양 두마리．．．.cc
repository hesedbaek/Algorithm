#include <iostream>
#include <vector>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, m, cnt;
char arr[102][102];
bool chk[102][102];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
vector<pair<int, int>> v;

void dfs(int a, int b){
	chk[a][b] = 1;
	
	for(int i=0; i<4; i++){
		int x = a+dx[i];
		int y = b+dy[i];
		if(x<0 || x>=n || y<0 || y>=m || chk[x][y] || arr[x][y] == '.')	continue;
		dfs(x, y);
	}
}


int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>n>>m;
		v.clear();
		cnt = 0;
		fill(&chk[0][0], &chk[0][0]+102*102, 0);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>arr[i][j];
				if(arr[i][j] == '#')	v.push_back({i, j});
			}
		}
		
		for(auto i:v){
			if(chk[i.first][i.second])	continue;
			dfs(i.first, i.second);
			cnt++;
		//	cout<<i.first<<" "<<i.second<<'\n';
		}
		cout<<cnt<<'\n';
	}	
}