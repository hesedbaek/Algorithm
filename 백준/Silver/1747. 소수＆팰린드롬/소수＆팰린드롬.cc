#include <iostream>
#include <cstdlib>
#include <cmath>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;
bool arr[2000008];

int main(){
	fastio();
	cin>>n;
	
	int len = sqrt(2000000);
	
	arr[1] =1;
	for(int i=2; i<=len; i++){
		if(arr[i])	continue;
		for(int j=i*2; j<=2000001; j+=i) arr[j] = 1;
	}
	
	for(int i=n; i<2000002; i++){
	//	cout<<i<<" "<<arr[i]<<'\n';
		if(arr[i]==0){
	//		cout<<i<<" ";
			string s = to_string(i);
			bool flag =0;
			for(int j=0; j<s.length()/2; j++){
				if(s[j] != s[s.length()-j-1]) flag =1;
			}
			if(flag == 0){
				cout<<s;
				return 0;
			}
		}
	}
	
}