#include <iostream>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, a, b;
int arr[20002], brr[20002];

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>a>>b;
		for(int i=0; i<a; i++)	cin>>arr[i];
		for(int j=0; j<b; j++)	cin>>brr[j];
		
		sort(arr, arr+a);
		sort(brr, brr+b);
		int sum =0;
		
		for(int i=a; i>0; i--){
			int cnt = 0;
			for(int j=0; j<b; j++){
				if(arr[i-1]>brr[j])	cnt++;
				else	break;
			}
			sum += cnt;
		}
		cout<<sum<<'\n';
	}
}