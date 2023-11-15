#include <iostream>
#include <queue>
using namespace std;

int n;
queue<int> q;

int main(){
	cin>>n;
	
	for(int i=1; i<=n; i++)	q.push(i);

	while(n>1)
	{
		n--;
		q.pop();
		q.push(q.front());	
		q.pop();
	}
	cout<<q.front();
}