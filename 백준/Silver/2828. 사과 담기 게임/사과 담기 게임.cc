#include <iostream>
using namespace std;

int n, m, j, t, cnt;

int main(){
	cin>>n>>m>>j;
	
	int start = 1, end = m;
	
	while(j--){
		cin>>t;
		
		bool flag = true;
		while(flag){
			
			if(t>=start && t<=end)	flag = false;
			else if(t<start){
				start--;
				end--;
				cnt++;
			}
			else if(t>end){
				start++;
				end++;
				cnt++;		
			}
		}		
	}
	cout<<cnt;
}