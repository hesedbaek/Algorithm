#include <iostream>
#include <queue>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, q, pic[1002][1002], x, y, a, b;
int sum[1002][1002];

//queue<pair<int, int>> q;

int main(){
	fastio();
	cin>>n>>m>>q;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>pic[i][j];
			sum[i][j] += sum[i][j-1]+ pic[i][j];
		}
	}

	while(q--){
		int val = 0;
		cin>>x>>y>>a>>b;
		for(int i=x; i<=a; i++)	val += sum[i][b] - sum[i][y-1];
		val /= (a-x+1)*(b-y+1);
		cout<<val<<'\n';
	}
}