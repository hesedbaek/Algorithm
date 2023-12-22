#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <tuple>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int l, r, c;
char sb[32][32][32];
int chk[32][32][32];
queue<tuple<int, int, int>>q;
int dx[] = {1, 0, -1, 0, 0, 0};
int dy[] = {0, 1, 0, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};
tuple<int, int, int>tmp;

int main(){
	fastio();
	while(1){
		cin>>l>>r>>c;
		if(!l&&!r&&!c)	return 0;
		
		fill(&sb[0][0][0], &sb[0][0][0]+32*32*32, 0);
		fill(&chk[0][0][0], &chk[0][0][0]+32*32*32, 0);
		
		for(int i=0; i<l; i++){
			for(int j=0; j<r; j++){
				for(int k=0; k<c; k++){
					cin>>sb[i][j][k];
					if(sb[i][j][k] == 'S'){
						q.push(make_tuple(i, j, k));
						chk[i][j][k] = 1;
					}
					if(sb[i][j][k] == 'E')	tmp = make_tuple(i, j, k);
				}
			}
		}
		
		while(q.size()){
			
			tuple<int, int, int>t = q.front(); q.pop();
			for(int i=0; i<6; i++){
				int z = get<0>(t) + dz[i];
				int x = get<1>(t) + dx[i];
				int y = get<2>(t) + dy[i];
				if(z<0 || z>=l || x<0 || x>=r || y<0 || y>=c)	continue;
				if(chk[z][x][y] || sb[z][x][y] == '#')	continue;
				chk[z][x][y] = chk[get<0>(t)][get<1>(t)][get<2>(t)]+1;
				q.push(make_tuple(z, x, y));
			} 
		}
		
		if(chk[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)] == 0)	cout<<"Trapped!"<<'\n';
		else	cout<<"Escaped in "<<chk[get<0>(tmp)][get<1>(tmp)][get<2>(tmp)]-1<<" minute(s)."<<'\n';
		
	}

	
}