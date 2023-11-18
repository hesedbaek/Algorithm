#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;

int main(){
	fastio();
	cin>>t;
	t /= 4;
	for(int i=0;i<t;i++)	cout<<"long ";
	cout<<"int";
}