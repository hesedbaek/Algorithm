#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n;
priority_queue<int> q;

int main(){
	fastio();
	cin>>n;
	while(n>0){
		q.push(n%10);
		n/=10;
	}
	while(q.size()){
		cout<<q.top();
		q.pop();
	}
}