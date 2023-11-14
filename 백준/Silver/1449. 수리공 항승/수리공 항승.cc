#include <iostream>
#include <algorithm>
using namespace std;

int n, l, cnt, len;
int a[1002];

int main(){
	cin>>n>>l;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	sort(a, a+n);
	
	int st = a[0];
	for(int i=1; i<n; i++){
		if(a[i]-st >= l){
			cnt++;
			st = a[i];
		}
	}
	
	
	cout<<cnt+1;
	
	
	
}