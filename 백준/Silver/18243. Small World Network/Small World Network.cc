#include <iostream>
#include <queue>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, k, a, b, chk[102];
queue<int> q;
vector<int> v[102];
bool flag = 0;

int main(){
	fastio();
	cin>>n>>k;
	
	for(int i=1; i<k+1; i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for(int i=1; i<n+1; i++){
		q.push(i);
		fill(&chk[0], &chk[0]+102, -1);
		chk[i] = 0;
		while(q.size()){
			int cur = q.front();
			q.pop();
			
			for(int i:v[cur]){
				if(chk[i] != -1)	continue;
				chk[i] = chk[cur] +1;
				q.push(i);
			}
		}
		for(int i=1; i<n+1; i++){
			if(chk[i] > 6 || chk[i] == -1)	flag = 1;
		//	cout<<i<<" "<<chk[i]<<'\n';
		}
	}
	
	
	if(flag)	cout<<"Big World!";
	else	cout<<"Small World!";
	
}