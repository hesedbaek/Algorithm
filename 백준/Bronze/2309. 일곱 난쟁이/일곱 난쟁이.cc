#include <iostream>
#include <algorithm>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, a[9];

int main(){
	fastio();
	for(int i=0; i<9; i++)	cin>>a[i];
	
	sort(a, a+9);
	do{
		int sum=0;
		for(int i=0; i<7; i++)	sum += a[i];
		if(sum == 100)	break;
	}while(next_permutation(a, a+9));
	for(int i=0; i<7; i++)	cout<<a[i]<<'\n';
	
}