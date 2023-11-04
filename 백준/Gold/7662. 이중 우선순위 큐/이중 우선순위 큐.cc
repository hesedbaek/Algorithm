#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, k, n;
char c;

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>k;
		multiset <int> ms;
		for(int i=0; i<k; i++){
			cin>>c>>n;
			if(c == 'I')	ms.insert(n);
			
			else{
				if(ms.size() == 0)	continue;
				if(n == 1){
					auto iter = ms.end();
					iter--;
					ms.erase(iter);
				}
				else	ms.erase(ms.begin());
			}
//		for(auto i: ms)	cout<<i<<" ";
//			cout<<'\n';
		}
		
		if(ms.size() == 0)	cout<<"EMPTY"<<'\n';
		else{
			if(ms.size() == 1)	cout<<*ms.begin()<<" "<<*ms.begin()<<'\n';
			else{
				auto it = ms.end();
				cout<<*(--it)<<" "<<*ms.begin()<<'\n';
			}
		}
	}
}