#include <iostream>
#include <queue>
#include <ctype.h>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

string s;
queue<string> q;
vector<char> v;

int main(){
	fastio();
	cin>>s;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] != '_' && (s[i] < 'A' ||(s[i] >'Z' && s[i]<'a') || s[i]>'z')){
			cout<<"Error!";
			return 0;
		}
	}
	
	if(s[0] < 97 || s[0]>122 || s[0] == '_' || s[s.length()-1] == '_'){
		cout<<"Error!";
		return 0;
	}
	
	if(s.find("_") != string::npos){	//c++
		long long pos=0, prv=0;
		while((pos = s.find('_')) != string::npos){
			if(pos == 0){
				cout<<"Error!";
				return 0;
			}
			string token = s.substr(0, pos);
		//	cout<<token<<'\n';
			for(int i=0; i<token.length(); i++){
			
				if(token[i] <91){
					cout<<"Error!";
					return 0;
				}
			}
			s.erase(0, pos+1);
	//		cout<<"000"<<'\n';
			q.push(token);
			prv = pos;
		}
		
		for(int i=0; i<s.length(); i++){
			if(s[i] <91){
				cout<<"Error!";
				return 0;
			}
		}
		q.push(s);
		
		cout<<q.front();
		q.pop();
		while(q.size()){
			string t = q.front(); q.pop();
			cout<<(char)(t[0]-32);
			for(int i=1; i<t.size(); i++) cout<<t[i];
		}
	}
	
	else{	//java 
		v.push_back(s[0]);
		for(int i=1; i<s.length(); i++){
			if(s[i] < 91){
				v.push_back('_');
				v.push_back(s[i]+32);
				continue;
			}
			v.push_back(s[i]);
		}
		
		for(auto i:v)	cout<<i;
	}
}