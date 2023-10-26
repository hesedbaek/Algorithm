#include <iostream>
using namespace std;

int n;
string bf, af;
bool flag = 1;

int main(){
	cin>>n>>bf>>af;
	
	if(n%2){
		for(int i=0; i<bf.length(); i++){
			if(bf[i] == af[i])	flag = false;
		}
	}
	else{
		for(int i=0; i<bf.length(); i++){
			if(bf[i] != af[i])	flag = false;
		}
	}
	
	if(flag)	cout<<"Deletion succeeded";
	else	cout<<"Deletion failed";
}