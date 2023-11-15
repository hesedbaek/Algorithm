#include <iostream>
using namespace std;

int n, m, x, y, cnt;
bool a[202][202];

int main(){
	cin>>n>>m;
	
	for(int i=0; i<m; i++){
		cin>>x>>y;
		a[x][y] =1;
		a[y][x] = 1;
	}
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			for(int k=j+1; k<=n; k++){
			//	cout<<i<<" "<<j<<" "<<k<<'\n';
				if(a[i][j] || a[j][k] || a[i][k] )	continue;
				cnt++;
			}
		}
	}
	cout<<cnt;
}