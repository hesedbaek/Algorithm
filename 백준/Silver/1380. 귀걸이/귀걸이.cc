#include <iostream>
#include <map>
using namespace std;

int n, a, scenario;
string s;
map <int, string> m;

int main(){
	while(1){
		scenario++;
		cin>>n;
		cin.ignore();
		if(!n) return 0;
		for(int i=0; i<n; i++){
			getline(cin, s);
			m[i] = s;
		}
		int arr[101]={0};
		for(int i=0; i<2*n-1; i++){
			cin>>a>>s;
			arr[a-1]++;
		}
		for(int i=0; i<n; i++){
			if(arr[i] == 1){
				cout<<scenario<<" "<<m[i]<<'\n';
				break;
			}
		}
	}
}