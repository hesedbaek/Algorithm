#include <iostream>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, m;
int arr[10];
bool chk[10];

void func(int k){
	if(k==m){
		for(int i=0; i<m; i++)	cout<<arr[i]<<" ";
		cout<<'\n';
		return;
	}	
	
	for(int i=1; i<=n; i++){
		if(!chk[i]){
			arr[k]=i;
			chk[i]=1;
			func(k+1);
			chk[i]=0;
		}
	}
}

int main(){
	fastio();
	cin>>n>>m;
	func(0);
}