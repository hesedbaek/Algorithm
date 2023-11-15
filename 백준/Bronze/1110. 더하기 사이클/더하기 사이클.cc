#include <iostream>
using namespace std;

int n, a, b, num, count, value;

int main()
{
	cin>>n;	

	if(n == 0)
	{
		cout<<1;
		return 0;
	}
	
	a = n%10;		
	b = n/10;	
	
	while(1)
	{
		count++;		
		num = a+b;	
		value = a*10 + num%10;	
		if(value == n)	break;
		else{
			a = value%10;		
			b = value/10;	
		}
	}
	cout<<count;
}