#include <iostream>
using namespace std;

long long s, cnt;
long long sum;

int main(){
	cin>>s;
	for(int i=1; i<=s; i++){
		sum+=i;
		cnt = i;
		if(sum > s){
			cout<<cnt-1;
			return 0;
		}
		else if(sum == s){
			cout<<cnt;
			return 0;
		}
	}
}