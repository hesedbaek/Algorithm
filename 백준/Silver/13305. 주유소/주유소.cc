#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
int km[100002], mon[100002];
long long sum, total[100002];
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
	//	cout<<"v.f, v.s: "<<v[i].first<<" "<<v[i].second<<" ";
		if(v[i].second <= j){
			sum += v[i].first*(total[j] - total[v[i].second-1]);
			j = v[i].second -1;
		//	cout<<sum<<" "<<j<<'\n';
		//	cout<<"f, s: "<<v[i].first<<" "<<v[i].second<<'\n';
		}
	}

	cout<<sum;
}
