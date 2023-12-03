#include <iostream>
#include <vector>
#include <utility>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m, a, b, c, d, cnt;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char cls[302][302];
string s;
bool chk[302][302];

void go(int curx, int cury){
	
	if(cls[curx][cury] == '1'){
		cls[curx][cury] = '0';
		return;
	}
	else if(cls[curx][cury] == '#'){
		cls[curx][cury] = 'X';
		return;
	}	
	
	for(int i=0; i<4; i++){
		int x = curx+dx[i];
		int y = cury+dy[i];
		if(x<1 || x>n || y<1 || y>m || chk[x][y]) continue;
		chk[x][y] = 1;
		go(x, y);
	}
}


int main(){
	fastio();
	cin>>n>>m;
	cin>>a>>b>>c>>d;
	for(int i=1; i<n+1; i++){
		cin>>s;
		for(int j=1; j<m+1; j++){
			cls[i][j] = s[j-1];			
		}
	}
	
	while(1){
		fill(&chk[0][0], &chk[0][0]+302*302, 0);
		chk[a][b] = 1;
		
		go(a, b);
		
		cnt++;
		if(cls[c][d] == 'X') break;
	}
	cout<<cnt;
}