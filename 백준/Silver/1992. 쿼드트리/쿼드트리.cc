#include <iostream>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

char a[65][65];
int n;
string s;

string quard(int x, int y, int sz){
	if(sz == 1)	return string(1, a[x][y]);
	char b = a[x][y];
	string ret ="";
	
	for(int i=x; i<x+sz; i++){
		for(int j=y; j<y+sz; j++){
			if(b != a[i][j]){
				ret += '(';
				ret += quard(x, y, sz/2);
				ret += quard(x, y+sz/2, sz/2);
				ret += quard(x+sz/2, y, sz/2);
				ret += quard(x+sz/2, y+sz/2, sz/2);
				ret += ')';
				return ret;
			}
		}
	}
	
	return string(1, a[x][y]);
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<n; j++)	a[i][j] = s[j];
	}
	cout<<quard(0, 0, n);
	return 0;
}