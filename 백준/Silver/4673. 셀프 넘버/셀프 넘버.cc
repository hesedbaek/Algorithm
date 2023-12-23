#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int dn;
bool chk[10002];

int main(){
	fastio();
	
	for(int i=1; i<10001; i++){
		int j=i;
		dn = j;
		
		while(j){
			dn += (j%10);
			j/=10;			
		}
		if(dn>10000)	continue;
		chk[dn] = 1;
	}
	
	for(int i=1; i<10001; i++){
		if(!chk[i])	cout<<i<<'\n';
	}
}