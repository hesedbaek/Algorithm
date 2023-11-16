#include <iostream>
using namespace std;

int n;
string s, cs, rs;

int main(){
	cin>>n;
	cin>>s;
	int len = s.length();
	while(n>1){
		n--;
		cin>>cs;
		
		for(int i=0; i<len; i++){
			if(s[i] != cs[i]) s[i] ='?';
		}
	}
	for(char c:s)	cout<<c;
}