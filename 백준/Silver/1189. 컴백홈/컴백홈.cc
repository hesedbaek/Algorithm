#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int val, r, c, k, cnt[7][7];
bool chk[7][7];
char arr[7][7];

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

void go(int x, int y){
	if(x == 0 && y == c-1){
		if(cnt[x][y] == k)	val++;
//		cout<<cnt[x][y]<<'\n';
		return;
	}
//	cout<<x<<", "<<y<<": "<<cnt[x][y]<<'\n';
	for(int i=0; i<4; i++){
		int a = x+dx[i];
		int b = y+dy[i];
		if(a<0 || a>=r || b<0 || b>=c || chk[a][b] || arr[a][b] == 'T')	continue;
		chk[a][b] = 1;
		cnt[a][b] = cnt[x][y]+1;
		go(a, b);
		chk[a][b] = 0;
		cnt[a][b]--;
	}
	
	return;
}

int main(){
    fastio();
	cin>>r>>c>>k;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
		}
	}
	chk[r-1][0] = 1;
	cnt[r-1][0] = 1;
	go(r-1, 0);
	
	cout<<val;
}