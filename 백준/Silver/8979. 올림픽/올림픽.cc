#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int x, y, n, m, a[102][102], b[102][102], ans[102][102];

struct node{
	int t;
	int a;
	int b;
	int c;
};

vector<node> v;
map<int, int> mp;

int main(){
	fastio();
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		node go;
		cin>>go.t>>go.a>>go.b>>go.c;
		v.push_back(go);
	}
	
	sort(v.begin(), v.end(), [](const node& s1, const node& s2){
		if(s1.a!=s2.a)	return s1.a>s2.a;
		else{
			if(s1.b!=s2.b)	return s1.b>s2.b;
			else{
				if(s1.c!=s2.c) return s1.c>s2.c;
			}
		}
	});
	int k = 1, cnt = 1;
	
	mp[v[0].t] = 1;
	
	for(int i=1; i<n; i++){
		cnt++;
		if(v[i].a == v[i-1].a && v[i].b == v[i-1].b && v[i].c == v[i-1].c){
			mp[v[i].t] = mp[v[i-1].t];
		}
		else{
			mp[v[i].t] = cnt;
		}
	//	cout<<v[i].t<<" "<<mp[v[i].t]<<'\n';
	}
	
	cout<<mp[m];

	
}