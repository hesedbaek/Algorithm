#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int cnt, ch[28];
string s;
bool flag;
vector<int> v;

int main(){
	fastio();
	cin>>s;
	for(char c:s)	v.push_back(c);
	sort(v.begin(), v.end());
	do{
		flag = 0;
		for(int i=0; i<s.length()-1; i++){
			if(v[i] == v[i+1])	flag = 1;
		}
		
		if(flag == 0)	cnt++;
		
	}while(next_permutation(v.begin(), v.end()));
	
	cout<<cnt;
}