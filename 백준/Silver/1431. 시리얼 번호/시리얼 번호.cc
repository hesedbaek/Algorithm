#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, t, sum, tmp;
string s;
vector<tuple<int, int, string>> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		sum = 0;
		for(char c:s){
			tmp = c-'0';
			if(tmp >=0 && tmp<=9)	sum+=tmp;
		}
		v.push_back({s.size(), sum, s});
	}
	
	sort(v.begin(), v.end());
	for(int i=0; i<n; i++)	cout<<get<2>(v[i])<<'\n';
	
}