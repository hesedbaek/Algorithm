#include <iostream>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, t;
priority_queue<ll, vector<ll>, greater<ll>> pq;

int main(){
	fastio();
	cin>>n;
	if(n==1){cout<<0; return 0;}
	while(n--){
		cin>>t;
		pq.push(t);
	}
	
	ll a=0, b=0;
	ll sum=0;
	while(pq.size()){
		a = pq.top(); pq.pop();
		if(pq.size()){
			b = pq.top(); pq.pop();
		}
		else{
			b=0;
		}
		if(pq.size()) pq.push(a+b);
		sum += a+b;
	//	cout<<a<<" "<<b<<'\n';
	//	cout<<sum<<"---";
	}
	
	cout<<sum;
	
	
}