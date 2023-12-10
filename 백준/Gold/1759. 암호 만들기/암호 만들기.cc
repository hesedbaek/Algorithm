#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, c, vol;
char arr[17];
vector<char>v;
bool flag = 0;

bool chk(char x){
	return( x=='a' || x=='e' || x=='i' || x=='o' || x=='u');
}

void go(int y){
	if(v.size() == n){
		if(vol<1 || n-vol<2) return;	
		for(char t:v)	cout<<t;
		cout<<'\n';
		return;
	}
	
	for(int i=y; i<c; i++){
		v.push_back(arr[i]);
		if(chk(arr[i])) vol++;
		go(i+1);
		if(chk(arr[i]))	vol--;
		v.pop_back();
	}
}



int main(){
	fastio();
	cin>>n>>c;
	for(int i=0; i<c; i++)	cin>>arr[i];
	sort(arr, arr+c);
	go(0);
}