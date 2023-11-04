#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int cnt, n, a, b, arr[102];

int main(){
	fastio();
	cin>>n;
	fill(arr, arr+102, -1);
	
	for(int i=0; i<n; i++){
		cin>>a>>b;
		int pv = arr[a];
		arr[a] = b;
		if(pv != -1 && pv != b)	cnt++;
	}
	cout<<cnt;
}