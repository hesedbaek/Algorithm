#include <iostream>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, r, cnt, val;
string s, f;
int R[52], S[52], P[52], a[3];
vector<pair<int, int>> v;

int main(){
	fastio();
	cin>>r>>s;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>f;
		for(int i=0; i<r; i++){
			if(f[i] == 'R'){
				R[i]++;
				if(s[i] == 'P')	cnt+=2;
				else if(s[i] == 'R') cnt++;	
			}
			else if(f[i] == 'S'){
				S[i]++;
				if(s[i] == 'R')	cnt+=2;
				else if(s[i] == 'S')	cnt++;
			}
			else if(f[i] == 'P'){
				P[i]++;
				if(s[i] == 'S')	cnt+=2;
				else if(s[i] == 'P')	cnt++;
			}
		}
		
	}
	
	for(int i=0; i<r; i++){
		int case1 = (R[i]*2 + S[i]*0 + P[i]*1);
		int case2 = (R[i]*1 + S[i]*2 + P[i]*0);
		int case3 = (R[i]*0 + S[i]*1 + P[i]*2);
		
		int mx = max(case1, case2);
		mx = max(mx, case3);
		val += mx;
	}
	cout<<cnt<<'\n'<<val;
	

}