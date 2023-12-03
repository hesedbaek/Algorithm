#include <iostream>
#include<string>
#include<stack>
using namespace std;

stack<char> stk;

int solution(string s)
{
    for(char c:s){
        if(stk.empty())    stk.push(c);
        else if(stk.top() == c)  stk.pop();
        else    stk.push(c);
    }   
    if(stk.empty()) return 1;
    else    return 0;
}