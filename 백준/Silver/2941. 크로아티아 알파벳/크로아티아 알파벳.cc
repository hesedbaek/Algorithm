#include <iostream>
#include <vector>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

string s;
int cnt;

int main(){
	fastio();
	vector<string> v = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	cin>>s;
	ll pos;
	
	for(int i=0; i<8; i++){
		while(1){
			if((pos = s.find(v[i])) == string::npos)	break;
			s.replace(pos, v[i].length(), "#");
		}		
	}
	cout<<s.size();	
}
