#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x;
priority_queue<int, vector<int>, greater<int>> q;

int main(){
	fastio();
	cin>>n;
	while(n--){
		cin>>x;
		if(x){
			q.push(x);
		}
		else{
			if(q.empty()){
				cout<<0<<'\n';
				continue;
			}
			cout<<q.top()<<'\n';
			q.pop();
		}
	}
	
}