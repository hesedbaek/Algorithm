#include <iostream>
#include <list>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, cnt;
string s;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>s;
		
		list <char> li;
		auto it = li.begin();
		for(char c:s){
			
			if(c == '-'){
				if(it == li.begin())	continue;
				it = li.erase(--it);
			}
			else if(c == '<'){
				if(it == li.begin())	continue;
				it--;
			}
			else if(c == '>'){
				if(it == li.end())	continue;
				it++;
			}
			else{
				li.insert(it, c);
			}
		}
		for(auto i: li)	cout<<i;
		cout<<'\n';
	}
	
}