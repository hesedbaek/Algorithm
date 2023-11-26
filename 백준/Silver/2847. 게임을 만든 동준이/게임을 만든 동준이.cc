#include <iostream>
using namespace std;

int n, sum, arr[102];

int main(){
	cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	
	for(int i=n-2; i>=0; i--){
		if(arr[i+1]<=arr[i]){
			int tmp = arr[i];
			arr[i] = arr[i+1]-1;
			sum += tmp-arr[i];
		}
	}
	cout<<sum; 
}