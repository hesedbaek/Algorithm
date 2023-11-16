#include <iostream>
using namespace std;

int m, a, b;
int arr[4] = {0, 1, 0, 0};

int main(){
	cin>>m;
	while(m--){
		cin>>a>>b;
		swap(arr[a], arr[b]);
	}
	
	for(int i=0; i<4; i++){
		if(arr[i]){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
}