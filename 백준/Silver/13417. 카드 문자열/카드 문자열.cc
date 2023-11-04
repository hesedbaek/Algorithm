#include <iostream>
#include <deque>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, r, val;
char c;
deque<char>dq;

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>c;
			if(dq.empty()){
				dq.push_back(c);
				continue;
			}
			if(dq.front() >= c)	dq.push_front(c);
			else	dq.push_back(c);	
		}
		for(int i=0; i<n; i++){
			cout<<dq.front();
			dq.pop_front();
		}
		cout<<'\n';
	}

}