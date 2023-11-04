#include <iostream>
#include <cstring>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, r, val;
string s, ans;
bool flag=1, dot =1;

int main(){
	fastio();
	cin>>s;
	long long pos;
	string token;
	
	while((pos = s.find('.')) != string::npos){
		dot = false;
		token = s.substr(0, pos);
		if(token.length()%2){
			flag = false;
			break;
		}
		int len = token.length()/4;
		for(int i=0; i<len; i++)	ans+="AAAA";
		int len2 = token.length()%4;
		if(len2)	ans+="BB";	
		
		s.erase(0, pos+1);
		ans += '.';
	}
	if(!dot){
		if(s.length()%2) flag = false;
		int len = s.length()/4;
		for(int i=0; i<len; i++)	ans+="AAAA";
		int len2 = s.length()%4;
		if(len2)	ans+="BB";	
	}
	
	if(dot){
		if(s.length()%2)	flag = false;
		int len = s.length()/4;
		for(int i=0; i<len; i++)	ans+="AAAA";
		int len2 = s.length()%4;
		if(len2)	ans+="BB";
	}
	
	if(flag)	cout<<ans;

	else	cout<<-1;
}