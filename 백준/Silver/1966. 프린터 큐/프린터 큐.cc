#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

int t, n, m, k;
int arr[102];

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
#endif

	cin>>t;
	while(t--){
		cin>>n>>m;
		int mx =0;
		queue<pair<int,int>> q;
		
		for(int i=0; i<n; i++){
			cin>>k; //1 1 9 1 1 1
			q.push({k, i});		//10 11 92 13 14 15
			arr[i] = k;
		}

		sort(arr, arr+n);	//1 1 1 1 1 9
		
		int cnt =1;
		while(1){
			mx = *max_element(arr, arr+n);
			pair<int, int> p = q.front();
			if(p.first == mx){
				if(p.second == m)	break;
				else{
					q.pop();
					n--;
					cnt++;
				}
			}
			else{
				q.push(p);
				q.pop();
			}		
		}
		cout<<cnt<<'\n';
	}
}