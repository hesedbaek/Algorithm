#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, c, cnt, a;
string s;
vector<int>v;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s>>c;
		v.push_back(c);
		if(s == "jinju")	a = c;		
	}
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0; i<n; i++){
		if(v[i]>a)	cnt++;
		else	break;
	}
	
	cout<<a<<'\n'<<cnt;
}