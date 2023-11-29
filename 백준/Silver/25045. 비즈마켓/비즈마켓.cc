#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, m;
ll a, sum;
priority_queue<ll> q1;
priority_queue<ll, vector<ll>, greater<ll>> q2;

int main(){
	fastio();
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a;
		q1.push(a);
	}
	for(int j=0; j<m; j++){
		cin>>a;
		q2.push(a);
	}
	bool flag = 0;	
	if(q1.size() < q2.size()) flag = 1;
//	cout<<flag<<'\n';
	if(flag){
		while(q1.size()){
			ll tmp = q1.top() - q2.top();
			if(tmp < 0) break;
			sum += tmp;
			q1.pop();
			q2.pop();
		}
	}
	else{
		while(q2.size()){
			ll tmp = q1.top() - q2.top();
			if(tmp < 0) break;
			sum += tmp;
			q1.pop();
			q2.pop();
		}
	}
	cout<<sum;
}
