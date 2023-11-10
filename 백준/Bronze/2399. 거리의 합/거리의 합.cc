#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[10002];

long long sum;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++)	cin>>a[i];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			sum += abs(a[j] - a[i]);
		}
	}
	cout<<sum;
}