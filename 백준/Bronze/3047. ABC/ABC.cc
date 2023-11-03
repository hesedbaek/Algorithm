#include <iostream>
#include <algorithm>
using namespace std;

int x[3];
string n;
vector<pair<int, int>> v;

int main(){

	for(int i=0; i<3; i++)	cin>>x[i];
	sort(x, x+3);
//	for(int i:x)	cout<<i<<" ";
	cin>>n;
	for(int i=0; i<3; i++){
		if(n[i] == 'A')	cout<<x[0]<<" ";
		else if(n[i] == 'B')	cout<<x[1]<<" ";
		else	cout<<x[2]<<" ";
	}
		
}