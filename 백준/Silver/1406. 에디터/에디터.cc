#include <iostream>
#include <list>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, k;
string s;
char c, t;
list<char> li;

int main(){
	fastio();
	cin>>s>>n;
	for(char i:s)	li.push_back(i);
	
	auto it = li.end();
	while(n--){
		cin>>c;
		if(c == 'L'){
			if(it == li.begin())	continue;
			it--;
		}
		else if(c == 'D'){
			if(it == li.end())	continue;
			it++;
		}
		else if(c == 'B'){
			if(it == li.begin())	continue;
			it = li.erase(--it);
		}
		else if(c == 'P'){
			cin>>t;
			li.insert(it, t);
		}
	}
	for(auto i:li)	cout<<i;

}