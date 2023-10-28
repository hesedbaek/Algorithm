#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int cnt;
string s;
char a[10][10];

int main(){
	fastio();
	for(int i=0; i<8; i++){
		cin>>s;
		for(int j=0; j<8; j++){
			if(i%2){
				if(j%2 && s[j] == 'F')	cnt++;
			}
			else{
				if(j%2==0 && s[j] =='F')	cnt++;
			}
		}
	}
	cout<<cnt;
}