#include <iostream>
using namespace std;

int t, n, m;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(n<m)	cout<<"NO BRAINS"<<'\n';
		else cout<<"MMM BRAINS"<<'\n';
	}	
}