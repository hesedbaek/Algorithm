#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int x, y, n, m, a[102][102], b[102][102], ans[102][102];

int main(){
	fastio();
	cin>>x>>y;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cin>>a[i][j];
		}
	}
	
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			for(int k=0; k<m; k++){
				ans[i][k] += a[i][j]*b[j][k];
			}
		}
	}

	
	for(int i=0; i<x; i++){
		for(int j=0; j<m; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<'\n';
	}
	
}