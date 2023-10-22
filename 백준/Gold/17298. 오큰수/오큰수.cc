#include <iostream>
#include <stack>
#include <cstring>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[1000002], r[1000002];
stack <int> s;

int main(){
	fastio();
	cin>>n;
	memset(r, -1, sizeof(r));
	for(int i=0; i<n; i++){
		cin>>a[i];
		while(s.size() && a[s.top()] < a[i]){
			r[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	for(int i=0; i<n; i++)	cout<<r[i]<<" ";
}