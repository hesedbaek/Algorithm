#include <iostream>
#include <stack>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int tmp =1, ret;
string s;
stack<char> stk;

int main(){
	fastio();
	cin>>s;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == '('){
			tmp*=2;
			stk.push(s[i]);
			continue;
		} else if(s[i] == '['){
			tmp*=3;
			stk.push(s[i]);
			continue;
		}	
		
		else if(s[i] == ')'){
			if(stk.empty() || stk.top() != '('){
				cout<<0;
				return 0;
			}
			if(s[i-1] == '(') ret+= tmp;
			tmp/=2;
			stk.pop();			
		}
		else if(s[i] == ']'){
			if(stk.empty() || stk.top() != '['){
				cout<<0;
				return 0;
			}
			if(s[i-1] == '[') ret+=tmp;
			tmp/=3;
			stk.pop();	
		}
	}
	if(stk.size())	cout<<0;
	else	cout<<ret;
}