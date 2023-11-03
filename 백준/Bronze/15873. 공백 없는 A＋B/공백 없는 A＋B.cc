#include <iostream>
#include <string>
#include <utility>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string s;
int ans;

int main(){
	fastio();
	cin>>s;
	if(s.length() == 3){
		if(s[1] == '0'){
			int a = s[2] - '0';
			ans = 10+a;
		}
		else{
			int a = s[0] -'0';
			ans = 10+a;
		}
	}
	else if(s.length() == 4)	ans = 20;
	else{
		int a = stoi(s);
		ans += (a/10);
		ans += (a%10);
	}
	cout<<ans;
}