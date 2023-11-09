#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[1002];
int chk[1002];
queue<int> q;

int main(){
	cin>>n;
	for(int i=0; i<n; i++)	cin>>a[i];
	
	q.push(0);
	fill(chk, chk+1002, -1);
	chk[0] = 0;
	while(q.size()){
		int t = q.front();
		q.pop();
		
		for(int i=0; i<=a[t]; i++){
			int x = t+i;
			if(x>=n || chk[x] != -1)	continue;
			chk[x] = chk[t]+1;
			q.push(x);
		}
	}
//	for(int i:chk)	cout<<i<<" ";
	cout<<chk[n-1];
}