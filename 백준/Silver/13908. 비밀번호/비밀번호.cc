#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int n, m, cnt, a[10];
vector<int>v;
set<vector<int>>st;
int chk[10];

void go(){
	
	if(v.size() == n){
//		for(int i:v)	cout<<i<<" ";
//		cout<<'\n';
		bool flag=0;
		for(int i=0; i<m; i++){
			if(chk[a[i]] == 0){
				return;
			}	
	
		}
	//	cout<<"------"<<'\n';
		cnt++;
		/*
		for(int i:v)	cout<<"st: "<<i<<" ";
		cout<<"----"<<'\n';
		st.insert(v);
		*/
		return;

		
	}
	
	for(int i=0; i<10; i++){
		v.push_back(i);
		chk[i]++;
		go();
		chk[i]--;
		v.pop_back();
	}
}
int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<m; i++)	cin>>a[i];
	
	go();
	cout<<cnt;
	
//	cout<<st.size();
}