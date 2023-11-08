#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x;
long long sum;
bool a[500002];
string s;
priority_queue<int, vector<int>, greater<int>> q;

int main(){
	fastio();
	cin>>n;
	for(int i=1; i<n+1; i++){
		cin>>x;
		q.push(x);
	}

	for(int i=1; i<n+1; i++){
		sum += abs(i-q.top());
		q.pop();
	}

	cout<<sum;
	
}