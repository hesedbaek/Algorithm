#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, sum, mx = 1000, cnt, arr[8][8];
int dx[] = {1, 1, 1};
int dy[] = {-1, 0, 1};
vector<int> v;

void go(int a, int b, int t){
	if(cnt == n-1){
	//	cout<<"B";
	//	cout<<sum<<'\n';
		mx = min(mx, sum);
	//	cout<<"mx: "<<mx<<'\n';
		return;
	}
	
	for(int i=0; i<3; i++){
		int x = a+dx[i];
		int y = b+dy[i];
		if(x >= n || y<0 || y>=m)	continue;
		if(i == t)	continue;
		cnt++;
		sum += arr[x][y];
		go(x, y, i);
		sum -= arr[x][y];
		cnt--;
	}
}


int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<m; i++){
		sum = arr[0][i];
		mx =1000;
		go(0, i, -1);
		v.push_back(mx);
	}
	sort(v.begin(), v.end());
	cout<<v[0];
}