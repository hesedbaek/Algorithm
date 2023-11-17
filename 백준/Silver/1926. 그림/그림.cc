#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, m, cnt, mx;
int arr[502][502];
bool chk[502][502];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	queue<pair<int, int>> q;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!arr[i][j] || chk[i][j])	continue;
			q.push({i, j});
			chk[i][j] = 1;
			cnt++;
			int sz = 0;
			while(!q.empty()){
				pair<int, int> p = q.front();
				q.pop();
				sz++;
				
				for(int i=0; i<4; i++){
					int x = p.first + dx[i];
					int y = p.second + dy[i];
					
					if(x<0 || x>=n || y<0 || y>= m)	continue;
					if(!arr[x][y] || chk[x][y])	continue;
					
					chk[x][y] = 1;
					q.push({x,y});
				}
				
			}
			mx = max(mx, sz);
		}
	}
	
	cout<<cnt<<'\n'<<mx;	
}