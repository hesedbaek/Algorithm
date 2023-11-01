#include <iostream>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s, a, b, c, mn;
vector<string>v;

int main(){
	fastio();
	cin>>s;
	for(int i=1; i<s.length(); i++){
		for(int j=1; j<s.length()-i; j++){
				string ans = "";
				string a=s.substr(0, i);
				string b=s.substr(i,j);
				string c=s.substr(i+j);

				reverse(a.begin(), a.end());
				reverse(b.begin(), b.end());
				reverse(c.begin(), c.end());
				
				ans += a;
				ans += b;
				ans += c;
				v.push_back(ans);
			
		}
	}
	sort(v.begin(), v.end());
	cout<<v[0];
}