#include <iostream>
using namespace std;

int n, arr[502][502], d[502][502], mx;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			cin>>arr[i][j];
		}
	}
	
	d[0][0] = arr[0][0];
	
	for(int i=1; i<n; i++){
		for(int j=0; j<i+1; j++){
			if(j-1<0)	d[i][j] = arr[i][j] + d[i-1][j];
			else	d[i][j]  = arr[i][j] + max(d[i-1][j], d[i-1][j-1]);
	//		cout<<"d["<<i<<"]["<<j<<"]: "<<d[i][j]<<'\n';
		}
	}
	
	for(int i=0; i<n; i++){
		mx = max(mx, d[n-1][i]);
	}
	cout<<mx;
}