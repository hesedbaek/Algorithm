#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n, c, s;
int arr[1002];
map<int, int> m;
map<int, int> m2;

int main(){
	cin>>n>>c;
	
	for(int i=0; i<n; i++){
		cin>>s;
		m[s]++;
		if(m2[s] == 0)	m2[s] = i+1;
	}
	
	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2){
		if(p1.second == p2.second)	return m2[p1.first]<m2[p2.first];
		return p1.second>p2.second;
	});
	
	for(auto i:v){
		for(int j=0; j<i.second; j++)	cout<<i.first<<" ";
	}
}
