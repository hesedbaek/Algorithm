#include <iostream>
#include <utility>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, cnt;
string s;
char pic[27][27];
int chk[27][27];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
queue<pair<int, int>> q;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<n; j++){
			pic[i][j] = s[j];
		}
	}
	vector<int> v;
	int val = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(pic[i][j] != '1' || chk[i][j]) continue;
			
			q.push({i, j});
			chk[i][j] = 1;
			cnt++;
			
			while(q.size()){
				pair<int, int> p = q.front(); q.pop();
				val++;
				for(int i=0; i<4; i++){
					int x = dx[i] + p.first;
					int y = dy[i] + p.second;
					if(x<0 || x>=n || y<0 || y>=n || chk[x][y] || pic[x][y] == '0')	continue;
					chk[x][y] = 1;
					q.push({x, y});
				}
			}
			pq.push(val);
			val = 0;
		}
	}

	cout<<cnt<<'\n';
	while(pq.size()){
		cout<<pq.top()<<'\n';
		pq.pop();
	}
}