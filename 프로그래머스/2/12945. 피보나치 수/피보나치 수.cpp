#include <string>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int f[100002];
    memset(f, 0, sizeof(f));
    f[1] = 1; f[2] = 1;
    for(int i=3; i<=n; i++){
        f[i] = (f[i-1] + f[i-2])%1234567;
    }
    return f[n]%1234567;
}