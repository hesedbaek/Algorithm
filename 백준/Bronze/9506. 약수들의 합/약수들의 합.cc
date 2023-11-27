#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
vector<int> v;

int main(){
	
	while(1){
		fastio();
		cin>>n;
		if(n==-1)	return 0;
		v.clear();
		int t = sqrt(n);
		int sum = 0;
		for(int i=1; i<=t; i++){
			if(n%i) continue;
			v.push_back(i);
			v.push_back(n/i);
			sum += i;
			sum += n/i;
		}
		
		if(sum - n != n){
			cout<<n<<" is NOT perfect."<<'\n';
			continue;
		}	
		
		sort(v.begin(), v.end());
		
		cout<<n<<" = ";
		for(int i=0; i<v.size()-2; i++){
			cout<<v[i]<<" + ";
		}
		cout<<v[v.size()-2]<<'\n';
	}
	
}