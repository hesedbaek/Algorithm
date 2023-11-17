#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int m;
string s;
bool flag = true;
vector<string> v;

int main(){
	cin>>m;
	fastio();
	for(int i=0; i<m; i++){
		cin>>s;
		string num = "";
		for(int j=0; j<s.length(); j++){
			if(isdigit(s[j])){
				num += s[j];
				if(j == s.length()-1)	v.push_back(num);
			}	
			else{
				if(num.size())	v.push_back(num);	
				num = "";
			}
		}
	}

	int len = v.size();
	for(int i=0; i<len; i++){
		if(v[i].front() == '0'){
			while(1){
				if(v[i].size() && v[i].front() == '0')	v[i].erase(v[i].begin());
				else	break;
			}
			if(v[i].size() == 0)	v[i] = "0";
		}
	}
	sort(v.begin(), v.end(), [](string a, string b){
		if(a.size()==b.size())	return a<b;
		return a.length()<b.length();
	});
	for(string i:v)	cout<<i<<'\n';
}