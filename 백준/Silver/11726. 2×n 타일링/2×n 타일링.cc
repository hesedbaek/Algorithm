#include <iostream>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, dp[1002];

int main(){
	cin>>n;
	
	dp[1] = 1; dp[2] = 2;
	for(int i=3; i<=n; i++){
		dp[i] = (dp[i-1]+dp[i-2])%10007;
	}
	cout<<dp[n]%10007;
}