#include <iostream>
#include <utility>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m, mx, a[52][52];
string s;
vector<pair<int, int>> v[52];
vector<int> sz;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<m; j++)	a[i][j] = s[j]-'0';
	}

	int t=0;	//최대 변 길이  
	if(n>m)	t = n;
	else	t = m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			for(int k=0; k<t; k++){
				if(i+k >=n || j+k >= m)	continue;
				if(a[i][j] == a[i][j+k] && a[i][j] == a[i+k][j] && a[i][j] == a[i+k][j+k]){
					mx = max(mx, (k+1)*(k+1));
				}
			}
		}
	}
	cout<<mx;
	
}