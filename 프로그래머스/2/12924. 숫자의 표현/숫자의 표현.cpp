#include <string>
#include <vector>

using namespace std;
int t, cnt, s, sum;

void go(int k){
	if(k > s)	return;
	t++;    
    for(int i=k; i<=s; i++){
        sum += i;
        if(sum == s){
            cnt++;
            sum = 0;
            go(k+1);
            break;
        }
        else if(sum>s){
        	sum = 0;
        	go(k+1);
        	break;
		}
    }
    return;
}

int solution(int n) {
    s = n;
    go(1);
    return cnt;
}