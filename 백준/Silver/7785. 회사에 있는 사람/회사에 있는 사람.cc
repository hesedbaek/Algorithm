#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
string s1, s2;
unordered_map<string, string> um;
vector<string>v;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>s1>>s2;
		um[s1] = s2;
	}
	
	for(auto e:um){
		if(e.second == "enter")	v.push_back(e.first);
	}
	
	sort(v.begin(), v.end(), [](string a, string b){
		return a>b;
	});
	
	for(string s:v)	cout<<s<<'\n';
}