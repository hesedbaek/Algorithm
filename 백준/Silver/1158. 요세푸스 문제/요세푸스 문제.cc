#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

string s;
int n, k;
deque<int> q;

int main(){
	fastio();
	cin>>n>>k;
	
	for(int i=1; i<=n; i++)	q.push_back(i);
	
	cout<<"<";
	 
	while(q.size()>1){
		n = q.size();
		int len = k%n;
		if(!len){
			cout<<q.back();
			q.pop_back();
		}
		else if(len == 1){
			cout<<q.front();
			q.pop_front();
		}
		else{
			for(int i=0; i<len-1; i++){
				q.push_back(q.front());
				q.pop_front();
			}
			cout<<q.front();
			q.pop_front();
		}
		cout<<", ";
	}
	cout<<q.front()<<'>';
	
}