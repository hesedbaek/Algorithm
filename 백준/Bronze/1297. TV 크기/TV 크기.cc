#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double D, H, W, n=3;		
	cin>>D>>H>>W;
	
	double real = sqrt(D*D/(H*H + W*W));
		
	int rH = real*H;
	int rW = real*W;		
	cout<<rH<<" "<<rW<<endl;
}