#include <iostream>
#include <stack>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int h, w, sum, a[502], rain[502][502];
stack<int>stk;

int main(){
	fastio();
	cin>>h>>w;
	for(int i=0; i<w; i++)	cin>>a[i];
	
	for(int i=0; i<w; i++){
		for(int j=h-a[i]; j<h; j++){
			rain[j][i] = 1;
		}
	}


	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(rain[i][j]) stk.push(j);
	//		cout<<"size: "<<stk.size()<<" ";
		}
		
		int f=0;
		while(stk.size()>1){
			f++;
			int x = stk.top();
			stk.pop();
	//		cout<<f<<": "<<x<<" "<<stk.top()<<'\n';
			sum += x - stk.top()-1;
	//		cout<<"sum: "<<sum<<'\n';
		}
		
		while(stk.size())	stk.pop();
	}
	cout<<sum;
/*
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cout<< rain[i][j]<<" ";
		}
		cout<<'\n';
	}
*/
}