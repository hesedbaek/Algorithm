#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n, m, val;
string s;
int arr[102][102];
int chk[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<m; j++)	arr[i][j] = s[j]-'0';
	}
	
	queue<pair<int, int>> q;
	q.push({0, 0});
	chk[0][0] = 1;
	
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		
		int cnt = 0;
		for(int i=0; i<4; i++){
			int x = p.first + dx[i];
			int y = p.second + dy[i];
			if(x<0 || x>=n || y<0 || y>=m)	continue;
			if(chk[x][y] || !arr[x][y])	continue;
			chk[x][y] = chk[p.first][p.second] +1;
			q.push({x, y});
		}
	}
	cout<<chk[n-1][m-1];
}