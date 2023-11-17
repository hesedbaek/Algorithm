#include <iostream>
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

string s;
int prv;
bool isVowel(int idx){
	return (idx =='a' || idx=='e'||idx == 'i'||idx == 'o'|| idx== 'u');
}

int main(){
	fastio();
	while(1){
		cin>>s;
		if(s == "end") return 0;
		
		int len = s.length();
		int include_v = 0, lcnt = 0, vcnt = 0;
		bool chk=true;
		
		for(int i=0; i<len; i++){
			int idx = s[i];
			if(isVowel(idx))	lcnt++, vcnt=0, include_v = 1;
			else	lcnt=0, vcnt++;
			if(lcnt == 3 || vcnt == 3)	chk = false;
			if(i>=1 && (prv == idx) && (idx != 'o' && idx != 'e'))	chk = false;
			prv = idx;
		}
		if(!include_v) chk = false;
		if(chk)		cout<<"<"<<s<<"> is acceptable."<<'\n';
		else		cout<<"<"<<s<<"> is not acceptable."<<'\n';
	}
	
} 