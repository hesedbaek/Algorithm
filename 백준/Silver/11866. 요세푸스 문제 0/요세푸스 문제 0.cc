#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, k;
queue<int> q;

int main(){
	cin>>n>>k;
	for(int i=1; i<n+1; i++)	q.push(i);
	
	cout<<"<";
	while(!q.empty()){
		int t = k-1;
		while(t--){
			q.push(q.front());
			q.pop();
		}
		if(q.size() == 1){
			cout<<q.front()<<">";
			return 0;
		}
		cout<<q.front()<<", ";
		q.pop();
	}
}
