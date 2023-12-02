#include <iostream>
#include <stack>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, a[500002], ret[500002];
stack<int> st;

int main(){
	fastio();
	cin>>n;
	for(int i=1; i<n+1; i++){
		cin>>a[i];
		
		while(st.size() && a[st.top()]<a[i])	st.pop();

		if(st.size() && a[st.top()] > a[i])	ret[i] = st.top();		
		st.push(i);	
	}
	
	for(int i=1; i<n+1; i++)	cout<<ret[i]<<" ";
	
}
