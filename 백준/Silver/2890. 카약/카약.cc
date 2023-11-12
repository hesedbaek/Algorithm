#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int r, c;
string s;
vector<pair<int,char>> v;

bool chk(char a){
	return (a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9');
}

int main(){
	fastio();
	cin>>r>>c;
	for(int i=0; i<r; i++){
		cin>>s;
		for(char i:s){
			if(chk(i)){
				ll pos = s.find(i);
				string t = s.substr(pos);
				v.push_back({t.length(),i});
				break;
			}
		}
	}
	
	sort(v.begin(), v.end());
	map<char, int> m;
	int t=1;
	m[v[0].second] = 1;
	for(int i=1; i<v.size(); i++){
		if(v[i-1].first != v[i].first) t++;
		m[v[i].second] = t;
	}	
	
	for(auto j:m) cout<<j.second<<'\n';
	
}

//https://www.acmicpc.net/problem/2890 