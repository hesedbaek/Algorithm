#include <iostream>
#include <cmath>
#include <cstdlib>
#include <deque>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

int n, t;
deque<int> q;
 
int main(){
	fastio();
	cin>>n;
	
	for(int i=1; i<=n; i++)	q.push_back(i);
	
	while(q.size() > 1){
		t++;
		ll len = q.size();
		ll en = (ll)pow(t, 3) % len;
		if(en == 0){
			q.pop_back();
			continue;
		}
		
		for(ll i=0; i<en-1; i++){
			q.push_back(q.front());
			q.pop_front();
		}
		q.pop_front();
	}
	cout<<q.front();
}