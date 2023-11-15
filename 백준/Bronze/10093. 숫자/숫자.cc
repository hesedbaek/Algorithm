#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long arr[2];

int main()
{
	cin>>arr[0]>>arr[1];
	
	sort(arr, arr+2);
	int sub = arr[1]-arr[0]-1;
	if(sub > -1)	cout<<sub<<'\n';
	else if(sub == -1)	cout<<0<<'\n';
	
	for(long long i =arr[0]+1; i<arr[1]; i++ )	cout<<i<<" ";	

}