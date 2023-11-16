#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
double score;
map<double, int> m;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>score;
		m[score]++;
//		m.insert(score);
	}
	int cnt =0;
	
	vector<pair<double, int>> v (m.begin(), m.end());
	
	sort(v.begin(), v.end());
	cout<<fixed;
	cout.precision(3);
	for(auto i:v){
		for(int j=0; j<i.second; j++){
			if(cnt == 7)	return 0;
			cnt++;
			cout<<i.first<<'\n';
		}
	}/*
	for(auto it = m.begin(); it!=m.end(); it++){
		if(cnt == 7) return 0;
		cnt++;
		cout<<fixed;
		cout.precision(3);

		
		cout<<(double)*it<<'\n';
	}*/
}