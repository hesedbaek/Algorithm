#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, len =1, a[10], sum, mx;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		len *= i+1;
	}	
	vector<int> v[len+2];
	
	sort(a, a+n);
	int t = 0;
	do{	
	//	cout<<t<<" ";
		sum = 0;
		for(int i=0; i<n-1; i++){
			sum += abs(a[i]-a[i+1]);
		}	
		mx = max(mx, sum);
	}while(next_permutation(a, a+n));

/*
	for(int i=0; i<len; i++){
		sum = 0;
		for(int j=0; j<n-1; j++){
			sum+= abs(v[i][j] - v[i][j+1]);
		}
		mx = max(mx, sum);
	}
	*/
	cout<<mx;
}