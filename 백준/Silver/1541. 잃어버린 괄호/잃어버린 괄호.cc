#include <iostream>
#include <cstdlib>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

long long sum;
queue<long long> q;
string s;

int main(){
	fastio();
	cin>>s;
	
	long long pos, pos2;
	while((pos=s.find('-'))!=string::npos){
		string tk = s.substr(0, pos);
		s.erase(0, pos+1);
		while((pos2 = tk.find('+'))!=string::npos){
			string tmp = tk.substr(0, pos2);
			tk.erase(0, pos2+1);
			sum += stoi(tmp);
		}
		sum+=stoi(tk);
		q.push(sum);
		sum = 0;
	}
	while((pos = s.find('+'))!=string::npos){
		string tmp = s.substr(0, pos);
		s.erase(0, pos+1);
		sum += stoi(tmp);
	}
	sum+=stoi(s);
	q.push(sum);
	
	long long val = q.front(); q.pop();
	while(q.size()){
		val -= q.front(); q.pop();
	}
	cout<<val;
	
}