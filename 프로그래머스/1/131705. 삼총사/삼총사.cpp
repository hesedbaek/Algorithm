#include <string>
#include <vector>
#include <iostream>
using namespace std;

int cnt, sum, len, n[15];
bool chk[15];
vector<int> vv;

void go(const vector<int> v, int t){
    if(vv.size() >3)    return;
    if(vv.size() == 3){
        if(sum == 0){
            cnt++;
            return;
        }
    }
    for(int i=t; i<v.size(); i++){
        vv.push_back(i);
        sum += v[i];
        go(v, i+1);
        vv.pop_back();
        sum -= v[i];
    }
}

int solution(vector<int> number) {
    go(number, 0);
    return cnt;
}