#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, t, cnt, pix[1002][3002], nw[1002][1002];
bool chk[1002][1002];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m*3; j++){
			cin>>pix[i][j];
		}
	}
	cin>>t;
	for(int i=0; i<n; i++){
		int k=0;
		for(int j=0; j<m*3; j+=3){
			int avg = (pix[i][j]+pix[i][j+1]+pix[i][j+2])/3;
			if(avg < t)	nw[i][k] = 0;
			else	nw[i][k] = 255;
			k++;
		}
	}
/*
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<nw[i][j]<<" ";
		}
		cout<<'\n';
	}*/
		
	queue<pair<int, int>> q;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!nw[i][j] || chk[i][j])	continue;
			q.push({i, j});
			chk[i][j] = 1;
			cnt++;
			while(q.size()){
				pair<int, int> p = q.front(); q.pop();
				for(int i=0; i<4; i++){
					int x = p.first + dx[i];
					int y = p.second + dy[i];
					if(x<0 || x>=n || y<0 || y>=m || chk[x][y] || !nw[x][y])	continue;
					chk[x][y] = 1;
					q.push({x, y});
				}
			}
		}
	}	
	cout<<cnt;
		
}