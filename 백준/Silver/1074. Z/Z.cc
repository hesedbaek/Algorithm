#include <iostream>
#include <cmath>
#include <cstdlib>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, r, c;

int go(int x, int y, int z){
	if(x == 0)	return 0;

	int half = 1<<(x-1);
	if(y<half && z<half)	return go(x-1, y, z);
	if(y<half && z>=half)	return half*half + go(x-1, y, z-half);
	if(y>=half && z<half)	return 2*half*half + go(x-1, y-half, z);
	if(y>=half && z>=half)	return 3*half*half + go(x-1, y-half, z-half);
	
}

int main(){
	fastio();
	cin>>n>>r>>c;
	cout<<go(n, r, c);
}