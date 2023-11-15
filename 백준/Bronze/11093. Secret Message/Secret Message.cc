#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int n, k;
char a[102][102], b[102][102];
deque<int> q;

int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		int l = s.length();
		
		int m =0, z=1;
		while(l>m){
			z++;
			m = z*z;
		}
		
		for(int ad=0; ad <m-l; ad++)	s+="*";
		
		int t = 0;
		for(int j=0; j<z; j++){
			for(int k=0; k<z; k++){
				a[j][k] = s[t];
				t++;		
			//	cout<<a[j][k]<<" ";		
			}
		//	cout<<'\n';
		}
		
		for(int j=0; j<z; j++){
			for(int k=z-1; k>=0; k--){
				if(a[k][j] == '*') continue;
				cout<<a[k][j];				
			//	cout<<a[j][k]<<" ";		
			}
		}
		cout<<'\n';
	}
}