#include <iostream>
using namespace std;

int a, b;
string s;
char arr[12][12];

int main(){
	cin>>a>>b;
	for(int i=0; i<a; i++){
		cin>>s;
		for(int j=0; j<b; j++){
			arr[i][j]  = s[j];
		}
	}
	
	
	for(int i=0; i<a; i++){
		for(int j=b-1; j>=0; j--){
			cout<<arr[i][j];
		}
		cout<<'\n';
	}
}