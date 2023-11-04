#include <iostream>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int cnt;
string s;
vector<int> v[28];

int main(){
	fastio();
	cin>>s;
	int n = 52;
	for(int i=0; i<n; i++)	v[s[i]-'A'].push_back(i);

	for(int i=0; i<n/2; i++){
		for(int j=0; j<n/2; j++){
		//	cout<<i<<" "<<j<<'\n';
			if(v[i][0] <v[j][0] && v[i][1] > v[j][0] && v[i][1] < v[j][1]){
			    cnt++;
		//	    cout<<(char)(i+'A')<<" "<<(char)(j+'A')<<'\n';
			}
		}
	}
	cout<<cnt;
}