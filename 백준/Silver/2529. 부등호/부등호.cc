#include <iostream>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
char arr[12], num[12];
bool chk[12];
vector<int> v;
vector<vector<int>> ans;

void go(int a){
	
	if(v.size() == n+1){
		ans.push_back(v);
		return;
	}
	
	for(int i=a; i<n; i++){
		for(int j=0; j<10; j++){
			if(chk[j]) continue;	
			if(v.empty()){
				v.push_back(j);
				chk[j] = 1;
				go(i);
				v.pop_back();
				chk[j] = 0;
			}
			else{
				if((arr[i] == '>' && v.back() > j) || (arr[i] == '<' && v.back() < j)){
					v.push_back(j);
					chk[j] = 1;
					go(i+1);
					v.pop_back();
					chk[j] = 0;
				}
			}
			
		}
		
	}
	return;
}


int main(){
	fastio();
	cin>>n;
	for(int i=0; i<n; i++)	cin>>arr[i];
	for(int i=0; i<10; i++)	num[i] = i+'0';
	
	go(0);
	
	vector<int> v1 = ans[0];
	vector<int> v2 = ans[ans.size()-1];
	
	for(auto i:v2)	cout<<i;
	cout<<'\n';
	for(auto i:v1) cout<<i;
}