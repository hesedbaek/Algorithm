#include <iostream>
#include <map>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, cnt;
string s;
char arr[22][22];
map <int, string> mp;
vector<pair<int, int>> v;

int main(){
	fastio();
	while(1){
		cin>>n;
		if(!n)	return 0;
		cnt++;
		cout<<"Group "<<cnt<<'\n';
		
		v.clear();
		for(int i=0; i<22; i++){
			for(int j=0; j<22; j++){
				arr[i][j] = ' ';
			}
		}
		
		for(int i=0; i<n; i++){
			cin>>s;
			mp[i] = s;
			for(int j=0; j<n-1; j++){
				cin>>arr[i][j];
				if(arr[i][j] == 'N'){
					int x = i-j-1;
					if(x<0)	x += n;
					v.push_back({x, i});
				}
			}			
		}
		
		if(v.empty()){
			cout<<"Nobody was nasty"<<'\n';
			cout<<'\n';
			continue;
		}
		for(auto i:v){
			cout<<mp[i.first]<<" was nasty about "<<mp[i.second]<<'\n';
		}
		cout<<'\n';
	}
}