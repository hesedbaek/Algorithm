#include <iostream>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int t, k, n;
int arr[15][15];

int main(){
	fastio();
	cin>>t;

	for(int i=1; i<15; i++)	arr[0][i]=i;
	/*
	for(int i=1; i<15; i++){
		for(int j=1; j<15; j++){
			int I = 1;
			while(I <= j){
				arr[i][j] += arr[i-1][I];
				I++;
			}
		}
	} 
	*/
	for(int i=1; i<15; i++){
		for(int j=1; j<15; j++){
			arr[i][j] = arr[i-1][j]+arr[i][j-1];
		}
	}
	
	while(t--){
		cin>>k>>n;
		cout<<arr[k][n]<<'\n';
	}
}