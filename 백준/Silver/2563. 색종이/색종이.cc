#include <iostream>
#include <cstdlib>
#include <cmath>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, x, y, cnt;
bool arr[102][102];

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>x>>y;
		for(int i=x; i<x+10; i++){
			for(int j=y; j<y+10; j++){
				arr[i][j] = 1;
			}	
		}
		
	}
	
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			if(arr[i][j])	cnt++;
		}
	}
	cout<<cnt;
}