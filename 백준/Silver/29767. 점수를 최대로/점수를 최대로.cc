#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;

ll n, k, sum, t;
priority_queue<int> q;
//set<int, vector<int>, greater<int>>s;
ll a[300002];

int main(){
	cin>>n>>k;
	cin>>a[0];
	 
	for(int i=1; i<n; i++){
		cin>>t;
		a[i] = a[i-1]+t;
	}	
	
	sort(a, a+n, greater<ll>());
	
	for(int i=0; i<k; i++){
	//	cout<<a[i]<<" ";
		sum+= a[i];
	}
	
	cout<<sum;
	
}