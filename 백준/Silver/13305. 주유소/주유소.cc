#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, mn, km[100002], total[100002], mon[100002];
long long sum;
vector<pair<int, int>> v, vv;

int main(){
	fastio();
	cin>>n;
	cin>>km[0];
	total[0] = km[0];
	for(int i=1; i<n-1; i++){
		cin>>km[i];
		total[i] = total[i-1]+km[i];
	}
	
	for(int i=0; i<n; i++){
		cin>>mon[i];
		v.push_back({mon[i], i});
	}
	
	sort(v.begin(), v.end());
	
	int j = n-2;
	for(int i=0; i<n; i++){
		if(v[i].second <= j){
			if(v[i].second == 0 ){
				sum += v[i].first * total[0];
				continue;
			}
			
			sum += v[i].first*(total[j] - total[v[i].second-1]);
			j = v[i].second -1;
		//	cout<<"f, s: "<<v[i].first<<" "<<v[i].second<<'\n';
		}
	}

	cout<<sum;
}