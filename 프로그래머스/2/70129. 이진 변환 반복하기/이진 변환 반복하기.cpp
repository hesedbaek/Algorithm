#include <string>
#include <vector>
#include <queue>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
queue<char> q;
int cnt, cng;

vector<int> solution(string s) {
    vector<int> answer;
    while(s != "1"){
        string tmp="";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') tmp+= s[i];
            else cnt++;
        }
        int ln = tmp.length();
        s = "";
        while(ln>0){
            char a = ln%2+'0';
            q.push(a);
            ln /= 2;
        }
        
        while(q.size()){
            s += q.front(); q.pop();
        }
        cng ++;
    }
    answer.push_back(cng);
    answer.push_back(cnt);
    return answer;
}