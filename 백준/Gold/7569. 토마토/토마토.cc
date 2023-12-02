#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); 
using namespace std;

int m, n, h, box[102][102][102];
int chk[102][102][102];
int dz[] = {1, -1, 0, 0, 0, 0};
int dx[] = {0, 0, 1, 0, -1, 0};
int dy[] = {0, 0, 0, 1, 0, -1};

queue<tuple<int, int, int>> q;

int main(){
	fastio();
	cin>>m>>n>>h;
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				cin>>box[i][j][k];
				if(box[i][j][k] == 1){
					q.push(make_tuple(i, j, k));
					chk[i][j][k]=1;
				}
			}
		}
	}
	
	while(q.size()){
		tuple<int, int, int> tp = q.front();
		q.pop();
		for(int i=0; i<6; i++){
			int z = get<0>(tp) + dz[i];
			int x = get<1>(tp) + dx[i];
			int y = get<2>(tp) + dy[i];
			if(x<0 || y<0 || z<0|| x>=n || y>=m || z>=h)	continue;
			if(chk[z][x][y]) continue;
			if(box[z][x][y] == -1) continue;
			chk[z][x][y] = chk[get<0>(tp)][get<1>(tp)][get<2>(tp)]+1;
			q.push(make_tuple(z, x, y));
		}
	}
	/*
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				cout<<chk[i][j][k]<<" ";
			}
			cout<<'\n';
		}
		cout<<"----"<<'\n';
	}
	*/
	
	int cnt=0, mx=0;
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				if(box[i][j][k] == 0 && chk[i][j][k] ==0){
					cout<<-1;
					return 0;
				}
				if(chk[i][j][k]>1) cnt++;
				
				mx = max(mx, chk[i][j][k]);
			}
		}
	}
	
	if(!cnt){	//이미 모두 익은 경우  
		cout<<0;
		return 0;
	}
	cout<<mx-1;
}