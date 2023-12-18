#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n;
string s;
vector<string>v;

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for(int i=0; i<n; i++){
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		
		bool flag =0;
		for(int i=0; i<n-1; i++){
			if(v[i].length()>v[i+1].length())	continue;
			if(v[i+1].substr(0, v[i].length()) == v[i])	flag = 1;
			if(flag){
				cout<<"NO"<<'\n';
				break;
			}
		}
		if(!flag)	cout<<"YES"<<'\n';
	}
	
}