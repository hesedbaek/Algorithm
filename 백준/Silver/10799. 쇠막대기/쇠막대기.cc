#include <iostream>
#include <stack>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int sum;
string s;
stack<char>stk;

int main(){
	fastio();
	cin>>s;
	int len = s.length();
	for(int i=0; i<len; i++){
      if(s[i] == '(') stk.push(s[i]);
      else{
        stk.pop();
        if(s[i-1] == '('){
          sum += stk.size();
        }
        else{
          sum++;
        }
      }
	}
  cout<<sum;
}