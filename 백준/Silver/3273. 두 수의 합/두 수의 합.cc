#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, a, x;
vector <int> v;

int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	int len = v[n-1];
	int crr[len+1] = {0};
	
	for(int i=0; i<n; i++)
	{
		crr[v[i]]++;
	}

	cin>>x;
	
	int count =0;
	for(int i=1; i<len+1; i++)
	{
		if(crr[i] && (x-i)<=len && (x-i)> 0){
			if(crr[x-i])	
			{
				count++;
			}
		}
	}
	
	cout<<count/2;
}