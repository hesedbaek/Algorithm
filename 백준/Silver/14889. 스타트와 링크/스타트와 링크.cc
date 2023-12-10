#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, s[22][22], sum, sum2, mn = 0x7fffffff;
bool chk[22];
vector<int> v, v2;

void go(int t){
    if(v.size() == n/2){
        for(int i=0; i<n; i++){
            if(chk[i] == 0){
                v2.push_back(i);
            }
        }
        /*
        for(auto i:v)   cout<<i<<" ";
        cout<<'\n';
        for(auto j:v2)  cout<<j<<" ";
        cout<<"----------"<<'\n';
        */
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                sum += s[v[i]][v[j]];
                sum += s[v[j]][v[i]];
            }
        }
        
        for(int i=0; i<v2.size(); i++){
            for(int j=i+1; j<v2.size(); j++){
                sum2 += s[v2[i]][v2[j]];
                sum2 += s[v2[j]][v2[i]];
            }
        }
        mn = min(abs(sum-sum2), mn);
        sum = 0; sum2 = 0;
        v2.clear();
        return;
    }
    
    for(int i=t; i<n; i++){
        if(v.empty() && i >0)   return;
        v.push_back(i);
        chk[i] = 1;
        go(i+1);
        v.pop_back();
        chk[i] = 0;
    }
}

int main() {
    fastio();
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>s[i][j];
        }
    }
    
    go(0);
    cout<<mn;
    
    return 0;
}