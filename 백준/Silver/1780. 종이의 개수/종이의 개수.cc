#include <iostream>
#include <utility>
#include <algorithm>
#include <map>
#include <cmath>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, cnt;
int pic[2200][2200];
vector<pair<int, int>> v;
int mp[3];

void go(int x, int y, int sz){
	int a = pic[x][y];

	if(sz == 1){
	//	cout<<"x, y: "<<x<<" "<<y<<'\n';
		mp[a+1]++;
		return;
	}

	bool flag = 0;
	for(int i=x; i<x+sz; i++){
		for(int j=y; j<y+sz; j++){
			if(pic[i][j] == a){
		//		cout<<"x, y: "<<x<<" "<<y<<'\n';
				continue;
			}	//continue;
			
			flag = 1;
			go(x, y, sz/3);
			go(x, y+sz/3, sz/3);
			go(x, y+2*sz/3, sz/3);
			
			go(x+sz/3, y, sz/3);
			go(x+sz/3, y+sz/3, sz/3);
			go(x+sz/3, y+2*sz/3, sz/3);
			
			go(x+2*sz/3, y, sz/3);
			go(x+2*sz/3, y+sz/3, sz/3);
			go(x+2*sz/3, y+2*sz/3, sz/3);
			return;
		}
	}
	if(flag == 0) mp[a+1]++;
	return;
}

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>pic[i][j];
		}
	}
	
	go(0, 0, n);

	for(int i:mp)	cout<<i<<'\n';
}