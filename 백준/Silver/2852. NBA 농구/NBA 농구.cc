#include <iostream>
#include <vector>
#include <utility>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, x, sum1, sum2;
string t;
map<int, int> m;
vector<pair<int, int>> v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x>>t;
		
		long long pos = t.find(':');
		string a = t.substr(0, pos);
		string b = t.substr(pos+1);
		int sec = stoi(a)*60 + stoi(b);	//convert to sec 
		
		v.push_back({x, sec});
	}
	v.push_back({0, 48*60});
	
	for(int i=0; i<n; i++){
		m[v[i].first]++;
		if(m[1] > m[2]){
			sum1 += v[i+1].second-v[i].second;
		}
		else if(m[1] < m[2]){
			sum2 += v[i+1].second-v[i].second;
		}
		else continue;
	}
	
	string min1, min2, sec1, sec2;
	
	if(sum1/60 <10){
		min1 += "0";
		min1 += to_string(sum1/60);
	} 
	else	min1 = to_string(sum1/60);
	
	if(sum1%60 <10){
		sec1 += "0";
		sec1 += to_string(sum1%60);
	}
	else sec1 = to_string(sum1%60);
	
	//=============================
	if(sum2/60 <10){
		min2 += "0";
		min2 += to_string(sum2/60);
	} 
	else	min2 = to_string(sum2/60);
	if(sum2%60 < 10){
		sec2 += "0";
		sec2 += to_string(sum2/60);
	}
	else sec2 = to_string(sum2%60);
	
	cout<<min1<<":"<<sec1<<'\n';
	cout<<min2<<":"<<sec2;
	

}