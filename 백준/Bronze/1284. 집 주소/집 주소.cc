#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int n;
int ans, a[28];
vector<pair<int, string>> v;

int main(){
	fastio();
	while(1){
		cin>>s;
		if(s == "0") return 0;
		int len =0;
		for(char c:s){
			if(c == '1'){
				len+=2;
			}
			else if(c == '0')	len+=4;
			else len +=3;
			len++;
		}
		cout<<len +1<<'\n';

	}

}