#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, a, b, c;

int main(){
	fastio();
	cin>>n;
	cout<<"Gnomes:"<<'\n';
	while(n--){
		cin>>a>>b>>c;
		bool flag = 0;
		if(a<b && b<c)	flag = 1;
		else if(a>b && b>c)	flag = 1;
		
		if(flag)	cout<<"Ordered"<<'\n';
		else	cout<<"Unordered"<<'\n';
	}
}