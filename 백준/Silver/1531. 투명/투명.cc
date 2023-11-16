#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, m, x, y, a, b, arr[102][102], cnt;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>x>>y>>a>>b;
		for(int j=x; j<=a; j++){
			for(int k=y; k<=b; k++){
				arr[j][k]++;
			}
		}
	}
	for(int j=0; j<=100; j++){
		for(int k=0; k<=100; k++){
			if(arr[j][k] > m) cnt++;
		}	
	}
	cout<<cnt;

}