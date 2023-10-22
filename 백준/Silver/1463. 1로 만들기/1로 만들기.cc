#include <iostream>
using namespace std;

int n, d[1000002];

int main(){
	cin>>n;
	
	for(int i=2; i<=n; i++){
		d[i] = d[i-1] +1;
		if(!(i%2))	d[i] = min(d[i], d[i/2]+1);
		if(!(i%3))	d[i] = min(d[i], d[i/3]+1);
	}
	cout<<d[n];	
}