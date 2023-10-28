#include <iostream>

using namespace std;

int n, sum1, sum0, cnt;
string s;
bool a[129][129];

void go(int x, int y, int sz){
	bool t = a[x][y];
	if(sz == 1){
		if(t == 1)	sum1++;
		else 	sum0++;
		return;
	}

	for(int i=x; i<x+sz; i++){
		for(int j=y; j<y+sz; j++){
			if(t != a[i][j]){
				go(x, y, sz/2);
				go(x, y+sz/2, sz/2);
				go(x+sz/2, y, sz/2);
				go(x+sz/2, y+sz/2, sz/2);
				return;
			}
		}
	}
	
	if(t == 1)	sum1++;
	else 	sum0++;
	return;
}


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	
	 go(0, 0, n);
	
	cout<<sum0<<'\n'<<sum1;
}