#include <iostream>
#include <vector>
using namespace std;

int a[20];
string s1, s2;
vector<int> v;

int main(){
	cin>>s1;
	cin>>s2;
	int j =0;	
	for(int i=0; i<8; i++){
		a[j++] = s1[i] - '0';
		a[j++] = s2[i] - '0';
	}
	int n = 16;
	while(n>2){
		for(int i=0; i<n-1; i++){
			int val = (a[i]+a[i+1])%10;
			a[i] = val;
		}
		n--;
	}
	cout<<a[0]<<a[1];
}