#include <iostream>
#include <cstdlib>
#include <cmath>
#include <numeric>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, m;
bool arr[1000008];

int main(){
	fastio();
	cin>>n>>m;
	arr[1]=1;
	int len = sqrt(1000000);
	for(int i=2; i<=len; i++){
		if(arr[i])	continue;
		for(int j=i*2; j<=1000000; j+=i)	arr[j]=1;
	}
	
	for(int i=n; i<=m; i++){
		if(arr[i]==0)	cout<<i<<'\n';
	}
	
	
}