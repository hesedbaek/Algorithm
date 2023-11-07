#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t;
string s;
//bool flag = 0, val = 0;

bool chk(char a){
	return (a == 'A' || a == 'B' || a == 'C' || a == 'D' || a == 'E' || a == 'F');
}

int main(){
	fastio();
	cin>>t;
	while(t--){
		cin>>s;
		int len = s.length();
		bool flag =0, val=0;
		
		if(!chk(s[0])){
			cout<<"Good"<<'\n';
			continue;
		}
		
		//first
		int i=0;
		if(s[0] != 'A') i = 1, flag = 1;
		
		int a=0, f=0, c=0;
		int idxa =0, idxf=0, idxc=0;
		
		//middle
	//	cout<<"i: "<<i<<'\n';
		for(i; i<len-1; i++){
			if(s[i] == 'A'){
				a++;
				idxa = i;
			}
			else if(s[i] == 'F'){
				f++;
				idxf = i;
			}
			else if(s[i] == 'C'){
				c++;
				idxc = i;
			}
			else	val = 1;
		}
		
	//	cout<<a<<"  "<<idxa<<", "<<f<<" "<<idxf-idxa<<", "<<c<<" "<<idxc-idxf<<'\n';
		if(flag){
			if(a != idxa || f != idxf-idxa)	val = 1;
			if(c && c != idxc-idxf)	val = 1;
		}
		else{
			if(a != idxa+1 || f != idxf-idxa) val = 1;
			if(c && c != idxc-idxf)	val = 1;		
		}
		
		//last
		if(!chk(s[len-1]))	val = 1;
		
		//ans
		if(val)	cout<<"Good"<<'\n';
		else cout<<"Infected!"<<'\n';

	}
	
	
}