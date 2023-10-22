#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int t;
ll c, n;

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>n;
		ll cnt=0;
		for(int i=0; i<n; i++){
			cin>>c;
			cnt=(cnt+c)%n;
		}
		
		if(cnt)	cout<<"NO";
		else	cout<<"YES";
		cout<<'\n';
	}
	return 0;
}