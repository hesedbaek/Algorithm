#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int n, sum;
map<int, int> m;

int main(){
	cin>>n;
	int arr[n] = {0};
	int brr[n] = {0};
	for(int i=0; i<n; i++)	cin>>arr[i];
	for(int i=0; i<n; i++)	cin>>brr[i];
	
	sort(arr, arr+n);
	sort(brr, brr+n);
	
	for(int i=0; i<n; i++){
		int a = arr[i]*brr[n-i-1];
		sum += a;
	}	
	cout<<sum;

}